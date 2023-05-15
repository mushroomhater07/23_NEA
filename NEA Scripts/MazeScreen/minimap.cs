using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class minimap : MonoBehaviour
{
    Camera minimap_cam;
    RenderTexture texture;
    RawImage img;

    public Camera MinimapCam
    {
        get => minimap_cam;
        set => minimap_cam = value;
    }

    public void Setup()
    {
        GameObject empty = new GameObject();
        minimap_cam = Instantiate(empty, this.transform).AddComponent<Camera>();
        minimap_cam.name = "Minicam";
        
        minimap_cam.transform.localPosition = new Vector3(0, 20f, 0);
        minimap_cam.transform.localRotation = Quaternion.Euler(90,0,0);
        minimap_cam.orthographic = true;
        minimap_cam.cullingMask = (1 << LayerMask.NameToLayer("Minimap"))|(1<<LayerMask.NameToLayer("Ground"));
        texture = new RenderTexture(446,233,16,RenderTextureFormat.ARGB32);
        minimap_cam.targetTexture = texture;
        img = GameObject.Find("Minimap").GetComponent<RawImage>();
        img.texture = texture;
    }
}
