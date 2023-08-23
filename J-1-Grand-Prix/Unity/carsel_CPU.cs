using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class carsel_CPU : MonoBehaviour
{

    public int button;

    public void Onclick()
    {
        if(button == 1)
        {
            //86に進む
            SceneManager.LoadScene("86_C");
        }
        else if(button == 2)
        {
            //Evijaに進む
            SceneManager.LoadScene("Evija_C");
        }    
        else if(button == 3)
        {
            //Furiaに進む
            SceneManager.LoadScene("Furia_C");
        }
        else if(button == 4)
        {
            //LX6に進む
            SceneManager.LoadScene("LX600_C");
        }
        else if(button == 5)
        {
            //Odysseyに進む
            SceneManager.LoadScene("Odyssey_C");
        }
        else if(button == 6)
        {
            //PS2に進む
            SceneManager.LoadScene("SP2_C");
        }
        else if(button == 7)
        {
            //Swiftに進む
            SceneManager.LoadScene("Swift_C");
        }
        else if(button == 8)
        {
            //X7に進む
            SceneManager.LoadScene("X7_C");
        }
        else if(button == 9)
        {
            //Yarisに進む
            SceneManager.LoadScene("Yaris_C");
        }
        else if(button == 0)
        {
            //戻る
            SceneManager.LoadScene("ModeSelect");
        }
    }
}
