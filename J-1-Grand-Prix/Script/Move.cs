using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    private float time;

    void Start()
    {
        var rb = GetComponent<Rigidbody>();
        rb.constraints = RigidbodyConstraints.FreezePosition;
        //yield return new WaitForSeconds(3.9f);
        Invoke(nameof(DelayMethod),3.9f);
    }
    void DelayMethod()
    {
        var rb = GetComponent<Rigidbody>();
        rb.constraints = RigidbodyConstraints.None;
    }

    void Update()
    {
        


    }
}