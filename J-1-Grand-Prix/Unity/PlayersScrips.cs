using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayersScrips : MonoBehaviour
{

    public int button;

    public void Onclick()
    {
        if(button == 1)
        {
            //シングルに進む
            SceneManager.LoadScene("Scenes/System/ModeSelect");
        }
        else if(button == 2)
        {
            //マルチに進む
            //SceneManager.LoadScene("hoge");
        }    
    }
}
