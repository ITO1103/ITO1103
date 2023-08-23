using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace VehiclePhysics.UI
{
public class Result : MonoBehaviour
{
    public bool goalnow;
    public GameObject Canvas;
    void Start()
    {
        Canvas.gameObject.SetActive(false);
    }

    void Update()
    {
        if(!goalnow == false){
    //         yield return new WaitForSeconds(3f);
    //         SceneManager.LoadScene("Opening");
        }
        if(RaceSystem.instance.goalnow)
        {
            Canvas.gameObject.SetActive(true);
            Debug.Log("YES!");
        }

    }
}
}