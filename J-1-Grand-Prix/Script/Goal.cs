// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.UI;

// public class Goal : MonoBehaviour
// {
//     public Text GoalText;

//     private int count;
//     private bool cangoal,goalnow = false, StartGoalLine = false;
//     private float seconds, minutes;
    
//     //private float countup = 0.0f;
//     void Start()
//     {
//         GoalText.text = "";
//     }

//     // void Update()
//     // {
//     //     timer();
//     // }

//     private void OnTriggerEnter(Collider other)
//     {
//         if(other.gameObject.tag == "CheckPoint")//チェックポイントに触れた
//         {
//             Destroy(other.gameObject);
//             count += 1;
//         }
//         if(other.gameObject.tag == "Line")//スタートラインに触れた
//         {
//             if(count == 8)//チェックポイントをすべて通ったか
//             {
//                 // Debug.Log("GOAL!");
//                 // StartGoalLine = false;
//                 // goalnow = true;
//                 GoalText.text = "GOAL";
//             }
//         }
//     }
// }
