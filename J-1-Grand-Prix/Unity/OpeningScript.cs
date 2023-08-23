using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OpeningScript : MonoBehaviour
{
    public void Onclick()
    {
        SceneManager.LoadScene("Scenes/System/Players");
    }
}
