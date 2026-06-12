using System;
using UnityEngine;
using System.Text;
using UnityEngine.XR;
using Matrix = MathNet.Numerics.LinearAlgebra.Matrix<float>;
using System.Collections.Generic;


//Code taken from https://github.com/anthonysteed/CalibrateTooltip 

public class CalibrateTooltip : MonoBehaviour
{

    public GameObject controller;     // The controller to add a tooltip
    public float tooltipSize = 0.01f;   // Local scale of the mesh

    [Space(10)]
    public int index;

    private Renderer meshRenderer;

    // For the inverse calculation
    private Matrix m;
    private Matrix v;

    private bool calibrationActive = false;
    private CalibrationManager calibrationManager;

    // For VR controller
    private InputDevice leftDevice;
    private bool leftGripPrev;

    void Start()
    {
        calibrationManager = GetComponent<CalibrationManager>();
    }

    void Update()
    {
        // VR controller
        refreshInputDevice();

        if (calibrationActive)
        {
            /*
            // input from Keyboard
            if (Input.GetKeyDown(KeyCode.T))
            {
                AddOne();
            }
            */
            // input from VR, if grip is pressed, add one point
            if (GripRisingEdge(leftDevice, ref leftGripPrev))
            {
                AddOne();
            }
            

        }
    }

    private void refreshInputDevice()
    {
        TryRefreshDevice(ref leftDevice,  InputDeviceCharacteristics.Left);
    }

    static void TryRefreshDevice(ref InputDevice device,
        InputDeviceCharacteristics side)
    {
        if (device.isValid) return;
        var found = new List<InputDevice>();
        InputDevices.GetDevicesWithCharacteristics(
            side | InputDeviceCharacteristics.Controller, found);
        if (found.Count > 0) device = found[0];
    }

    static bool GripRisingEdge(InputDevice device, ref bool prevState)
    {
        if (!device.isValid) { prevState = false; return false; }
        device.TryGetFeatureValue(CommonUsages.gripButton, out bool pressed);
        bool rising = pressed && !prevState;
        prevState = pressed;
        return rising;
    }
    private void AddOne()
    {
        print("set tippoint");
        index++;
        Matrix4x4 mat = controller.transform.localToWorldMatrix;

        Matrix row = Matrix.Build.Dense(3, 3);
        row[0, 0] = -mat.m00;
        row[0, 1] = -mat.m01;
        row[0, 2] = -mat.m02;
        row[1, 0] = -mat.m10;
        row[1, 1] = -mat.m11;
        row[1, 2] = -mat.m12;
        row[2, 0] = -mat.m20;
        row[2, 1] = -mat.m21;
        row[2, 2] = -mat.m22;
        row = Matrix.Build.DenseIdentity(3).Append(row);

        Matrix col = Matrix.Build.Dense(3, 1);
        col[0, 0] = controller.transform.localPosition.x;
        col[1, 0] = controller.transform.localPosition.y;
        col[2, 0] = controller.transform.localPosition.z;

        if (index == 1)
        {
            m = row;
            v = col;
        }
        else
        {
            m = m.Stack(row);
            v = v.Stack(col);
        }

        if (index >= 8)
        {
            Matrix inv = m.PseudoInverse();
            Matrix res = inv.Multiply(v);
            calibrationManager.tooltip.position = new Vector3(res[3, 0], res[4, 0], res[5, 0]);
            SetActive(false);
        }
    }

    public void Clear()
    {
        index = 0;
        calibrationManager.tooltip.localPosition = new Vector3(0f, 0f, 0f);
        Debug.Log("Reset");
    }

    public void SetActive(bool active)
    {
        calibrationActive = active;
    }

    public bool GetActive()
    {
        return calibrationActive;
    }
}
