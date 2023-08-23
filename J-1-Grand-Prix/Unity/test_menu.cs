using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class test_menu : MonoBehaviour
{
    void Update()
    {
        if(Input.GetKey(KeyCode.A))
        {
            SceneManager.LoadScene("Main");
        }
    }
}
