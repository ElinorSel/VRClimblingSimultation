using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.XR;

public class CalibrationManager : MonoBehaviour
{
    public Transform tooltip;
    
    [Space(10)] 
    
    // this is just to display the calibration process in the inspector
    [Header("Calibration points")]
    [SerializeField] 
    private int calibrationPointIndex;
    [SerializeField]
    private Vector3[] sourcePoints;
    [SerializeField]
    private Vector3[] targetPoints;
    
    [Space(10)] 
    [Header("Currently selected object to align")]
    [SerializeField]
    private CalibrateObject currentObjectToCalibrate;
    
    private string[] alignObjectChoices;
    private CalibrateObject[] alignObjectsInScene;

    private int choiceIndex;
    private GameObject targetPointTopParentInScene;

    private GameObject[] targetPointParents;

    private int dummyIndex = 0;

    public float calibrationDistanceError = 0;

    // VR controller
    private InputDevice leftDevice;
    private bool leftTriggerPrev = false;


    #region GETTER AND SETTER

    public CalibrateObject ObjectToCalibrate
    {
        get => currentObjectToCalibrate;
        set => currentObjectToCalibrate = value;
    }
    
    public string[] AlignObjectChoices
    {
        get => alignObjectChoices;
        set => alignObjectChoices = value;
    }
    
    public CalibrateObject[] AlignObjectsInScene
    {
        get => alignObjectsInScene;
        set => alignObjectsInScene = value;
    }
    
    public int ChoiceIndex
    {
        get => choiceIndex;
        set => choiceIndex = value;
    }
    
    #endregion

    void Awake()
    {
        alignObjectsInScene = FindObjectsOfType<CalibrateObject>();
        alignObjectChoices = CreateCalibrationObjectsAsString(alignObjectsInScene);

        if (alignObjectsInScene.Length != 0)
        {
            currentObjectToCalibrate = alignObjectsInScene[0];
            ChangeColorOfPointer();
        }

        targetPointTopParentInScene = new GameObject("TargetPoints");
        //targetPointTopParentInScene.transform.SetParent(GameObject.FindGameObjectWithTag("SteamVR").transform);
        targetPointParents = new GameObject[alignObjectsInScene.Length];
        
        for (int i = 0; i < alignObjectsInScene.Length; i++)
        {
            targetPointParents[i] = new GameObject(alignObjectsInScene[i].name + "Targets");
            targetPointParents[i].transform.SetParent(targetPointTopParentInScene.transform);
        }
    }

    void Update()
    {
        FetchSourceAndTargetPointsToDisplay();
        ChangeColorOfPointer();

        // For testing
       /* if (Input.GetKeyDown(KeyCode.M))
        {
            currentObjectToCalibrate.AddTargetPoint(CreateDummySourcePoint(dummyIndex), targetPointParents[choiceIndex].transform);
            ChangeColorOfPointer();
            dummyIndex++;
        }
        */
        // throw new Exception("No input method implemented yet.");
        

    
       RefreshLeftDevice();

        if (TriggerRisingEdge(leftDevice, ref leftTriggerPrev))
        {
            currentObjectToCalibrate.AddTargetPoint(tooltip.position, targetPointParents[choiceIndex].transform);
            ChangeColorOfPointer();
        }
    
        
    }

    // For VR Controller
    void RefreshLeftDevice()
    {
    if (leftDevice.isValid) return;

    var devices = new List<InputDevice>();
    InputDevices.GetDevicesWithCharacteristics(
        InputDeviceCharacteristics.Left | InputDeviceCharacteristics.Controller,
        devices);

    if (devices.Count > 0)
        leftDevice = devices[0];
    }

    bool TriggerRisingEdge(InputDevice device, ref bool prevState)
    {
    if (!device.isValid)
    {
        prevState = false;
        return false;
    }

    device.TryGetFeatureValue(CommonUsages.triggerButton, out bool pressed);
    bool rising = pressed && !prevState;
    prevState = pressed;
    return rising;
    }



    private Vector3 CreateDummySourcePoint(int number)
    { switch (number % sourcePoints.Length)
        {
            // blue
            case 0:
                return new Vector3(0, 1.25f, 0);
            // red
            case 1:
                return new Vector3(0.5f, 1.25f, 0);
            // yellow
            case 2:
                return new Vector3(0.5f, 1.25f, -0.5f);
            // green
            case 3:
                return new Vector3(0, 1.25f, -0.5f);
            // magenta
            case 4:
                return new Vector3(0, 0.75f, 0);
            default:
                return Vector3.zero;
        }
    }

    #region CUSTOM EDITOR UI
    
    public string[] CreateCalibrationObjectsAsString(CalibrateObject[] input)
    {
        string[] result = new string[input.Length];

        for (int i = 0; i < input.Length; i++)
        {
            result[i] = input[i].ToString();
        }

        return result;
    }

    public void FetchSourceAndTargetPointsToDisplay()
    {
        calibrationDistanceError = currentObjectToCalibrate.calibrationDistanceError;
        calibrationPointIndex = currentObjectToCalibrate.calibrationPointIndex;
        sourcePoints = GetVectorsFromTransforms(currentObjectToCalibrate.sourcePoints);
        targetPoints = GetVectorsFromTransforms(currentObjectToCalibrate.targetPoints);
    }

    private Vector3[] GetVectorsFromTransforms(Transform[] transforms)
    {
        Vector3[] result = new Vector3[transforms.Length];

        for (int i = 0; i < transforms.Length; i++)
        {
            if (transforms[i] != null)
            {
                result[i] = transforms[i].position;    
            }
        }
        
        return result;
    }
    
    public void ResetTargetPoints()
    {
        currentObjectToCalibrate.ResetAllTargetPoints();
    }

    public void ResetLastTargetPoint()
    {
        currentObjectToCalibrate.ResetLastTargetPoint();
    }

    public void SaveCalibrationToFile()
    {
        TransformPersistence.GetInstance().SaveToFile();
    }

    public void LoadCalibrationFromFile()
    {
        TransformPersistence.GetInstance().LoadAndApplyTransformationFromFile();
    }

    public void ChangeColorOfPointer()
    {
        int colorNumber = 0;
        if (sourcePoints.Length != 0)
        {
            colorNumber = calibrationPointIndex;
        }
        
        Renderer rendererRight = tooltip.GetComponent<Renderer>();
        rendererRight.material = new Material(Shader.Find("UI/Unlit/Detail"));
        rendererRight.sharedMaterial.color = ColorOrder.GetColor(colorNumber);
    }
    
    #endregion
}
