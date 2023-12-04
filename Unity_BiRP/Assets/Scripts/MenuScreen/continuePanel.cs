using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class continuePanel : MonoBehaviour
{
    private Button continueButton;

    private void Start()
    {
        continueButton = gameObject.GetComponent<Button>();
        continueButton.onClick.AddListener(ClosePanel);
    }

    private void ClosePanel()
    {
        Destroy(this.gameObject);
    }
}
