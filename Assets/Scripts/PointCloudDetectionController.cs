using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;

/// <summary>
/// This example demonstrates how to toggle plane detection,
/// and also hide or show the existing planes.
/// </summary>
[RequireComponent(typeof(ARPointCloudManager))]
public class PointCloudDetectionController : MonoBehaviour
{
    [Tooltip("The UI Text element used to display plane detection messages.")]
    [SerializeField]
    Text m_TogglePointDetectionText;

    /// <summary>
    /// The UI Text element used to display plane detection messages.
    /// </summary>
    public Text togglePointDetectionText
    {
        get { return m_TogglePointDetectionText; }
        set { m_TogglePointDetectionText = value; }
    }

    /// <summary>
    /// Toggles plane detection and the visualization of the planes.
    /// </summary>
    public void TogglePointDetection()
    {
        m_ARPointCloudManager.enabled = !m_ARPointCloudManager.enabled;

        string pointDetectionMessage = "";
        if (m_ARPointCloudManager.enabled)
        {
            pointDetectionMessage = "Disable Point Detection and Hide Existing";
            SetAllPointsActive(true);
        }
        else
        {
            pointDetectionMessage = "Enable Point Detection and Show Existing";
            SetAllPointsActive(false);
        }

        if (togglePointDetectionText != null)
            togglePointDetectionText.text = pointDetectionMessage;
    }

    /// <summary>
    /// Iterates over all the existing planes and activates
    /// or deactivates their <c>GameObject</c>s'.
    /// </summary>
    /// <param name="value">Each planes' GameObject is SetActive with this value.</param>
    void SetAllPointsActive(bool value)
    {
        foreach (var point in m_ARPointCloudManager.trackables)
            point.gameObject.SetActive(value);
    }

    void Awake()
    {
        m_ARPointCloudManager = GetComponent<ARPointCloudManager>();
    }

    ARPointCloudManager m_ARPointCloudManager;
}

