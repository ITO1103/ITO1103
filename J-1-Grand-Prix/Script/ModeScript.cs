using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ModeScript : MonoBehaviour
{

    public int button;

    public void Onclick()
    {
        if(button == 1)
        {
            //rankに進む
            //SceneManager.LoadScene("hoge");
        }
        else if(button == 2)
        {
            //timeに進む
            SceneManager.LoadScene("Scenes/System/carsel_Time");
        }    
        else if(button == 3)
        {
            //cpuに進む
            SceneManager.LoadScene("Scenes/System/carsel_CPU");
        }
        else if(button == 4)
        {
            //freeに進む
            //SceneManager.LoadScene("hoge");
        }
        else if(button == 0)
        {
            //戻る
            SceneManager.LoadScene("Scenes/System/Players");
        }
    }
}
