using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class carsel_Time : MonoBehaviour
{

    public int button;

    public void Onclick()
    {
        if(button == 1)
        {
            //86に進む
            SceneManager.LoadScene("86_T");
        }
        else if(button == 2)
        {
            //Evijaに進む
            SceneManager.LoadScene("Evija_T");
        }    
        else if(button == 3)
        {
            //Furiaに進む
            SceneManager.LoadScene("Furia_T");
        }
        else if(button == 4)
        {
            //LX6に進む
            SceneManager.LoadScene("LX600_T");
        }
        else if(button == 5)
        {
            //Odysseyに進む
            SceneManager.LoadScene("Odyssey_T");
        }
        else if(button == 6)
        {
            //PS2に進む
            SceneManager.LoadScene("SP2_T");
        }
        else if(button == 7)
        {
            //Swiftに進む
            SceneManager.LoadScene("Swift_T");
        }
        else if(button == 8)
        {
            //X7に進む
            SceneManager.LoadScene("X7_T");
        }
        else if(button == 9)
        {
            //Yarisに進む
            SceneManager.LoadScene("Yaris_T");
        }
        else if(button == 0)
        {
            //戻る
            SceneManager.LoadScene("ModeSelect");
        }
    }
}
