using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 
public class ObjectActive : MonoBehaviour
{
    public GameObject CheckPoint1;
    public GameObject CheckPoint2;
    public GameObject LapPoint;
    public GameObject LapPoint1;
    public GameObject timerText;
    
    void Start()
    {
        CheckPoint1.SetActive(false);
        CheckPoint2.SetActive(false);
        LapPoint.SetActive(true);
        LapPoint1.SetActive(false);
        StartCoroutine("ObjectAppear");


    }


    IEnumerator ObjectAppear()
    {
        yield return new WaitForSeconds(3.9f);
        timerText.SetActive(false);
        yield return new WaitForSeconds(30.0f);
        CheckPoint1.SetActive(true);
        CheckPoint2.SetActive(true);
        //LapPoint.SetActive(false);
        LapPoint1.SetActive(true);
    }
       
}