using System.Collections;
using System.Threading;
using System.Collections.Generic;
using UnityEngine;

public class test_select : MonoBehaviour
{
    public GameObject a;
    public GameObject b;
    public GameObject c;
    Vector3 temp,apos,bpos,cpos;

    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        Vector3 apos = a.transform.position;
        Vector3 bpos = b.transform.position;
        Vector3 cpos = c.transform.position;
        if(Input.GetKey(KeyCode.RightArrow)){
            temp=apos;//tutu
            apos=bpos;//hako
            bpos=cpos;//tama
            cpos=temp;
            a.transform.position=apos;
            b.transform.position=bpos;
            c.transform.position=cpos;
            Thread.Sleep(100);
        }else if(Input.GetKey(KeyCode.LeftArrow)){
            temp=cpos;
            cpos=bpos;
            bpos=apos;
            apos=temp;
            a.transform.position=apos;
            b.transform.position=bpos;
            c.transform.position=cpos;
            Thread.Sleep(100);
        }
    }
}
