using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Item : MonoBehaviour
{
    public Rigidbody projectile;
    public Rigidbody projectile2;
    
    void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            Rigidbody clone;
            clone = Instantiate(projectile, transform.position, transform.rotation) as Rigidbody;
            //clone = Instantiate(projectile,new Vector3(0.0f,0.0f,0.0f),Quaternion.identity) as Rigidbody;
            //clone.velocity = transform.TransformDirection(Vector3.forward);
        }
        if (Input.GetButtonDown("Fire2"))
        {
            Rigidbody clone;
            clone = Instantiate(projectile2, transform.position, transform.rotation) as Rigidbody;
            //clone = Instantiate(projectile,new Vector3(0.0f,0.0f,0.0f),Quaternion.identity) as Rigidbody;
            clone.velocity = transform.TransformDirection(Vector3.forward * 80);
        }
    }
}
