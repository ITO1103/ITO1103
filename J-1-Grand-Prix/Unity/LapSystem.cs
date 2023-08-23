// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.UI;

// public class LapSystem : MonoBehaviour
// {


//     public Text LapText;
//     public Text LapCount;

//     private int count;
//     private bool Lap = false;
//     private float seconds, minutes;


//     void Start()
//     {
//         LapCount.text = "LAP 1/2";
//     }


//     void Update()
//     {
//         timer();
//     }

//     private void OnTriggerEnter(Collider other)
//     {
//         if(other.gameObject.tag == "Lap")//チェックポイントに触れた
//         {
//             Destroy(other.gameObject);
//             count += 1;
//         }
//         if(other.gameObject.tag == "Lap")//スタートラインに触れた
//         {
//             if(count == 1)
//             {
//                 Lap = true;
//             }

//             else
//             {
//                 Lap = false;
//             }
//         }
//     }

//     void timer()
//     {
//         if (Lap == true)
//         {

//             seconds += Time.deltaTime;
//         }


//         if(seconds >= 60)
//         {
//             minutes++;
//             seconds -= 60;
//         }


//         if (!Lap)
//         {
//             LapText.text = "Lap " + minutes.ToString("00") + " : " + ((int)seconds).ToString("00");
//             LapCount.text = "LAP 2/2";
//         }

//         else
//         {
//             LapText.text = "Lap " + minutes.ToString("00") + " : " + ((int)seconds).ToString("00");
//             LapCount.text = "LAP 1/2";

//         }
//     }
// }