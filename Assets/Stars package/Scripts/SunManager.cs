using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

[RequireComponent(typeof(Light))]
public class SunManager : MonoBehaviour
{
    [SerializeField] Vector3 m_rotationAxis = Vector3.up;
    [SerializeField] float m_rotationSpeed = 1f;
    [SerializeField] bool m_autoRotate = true;
    [SerializeField] AnimationCurve m_intensity;
    [SerializeField] Gradient m_ambientLight;

    private Light m_sun;
    private Color m_ambientColour;


    private void Awake()
    {
        m_sun = GetComponent<Light>();
    }


    void Update()
    {
        if (m_autoRotate)
            transform.Rotate(m_rotationAxis, Time.deltaTime * m_rotationSpeed, Space.Self);

        float dot = Vector3.Dot(transform.forward, Vector3.down);

        float intensity = m_intensity.Evaluate(dot);
        m_sun.intensity = intensity;

        float scaledDot = 0.5f * (dot + 1f);
        m_ambientColour = m_ambientLight.Evaluate(scaledDot);
        RenderSettings.ambientLight = m_ambientColour;
    }
}
