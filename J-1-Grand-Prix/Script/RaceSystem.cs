using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class RaceSystem : MonoBehaviour
{

    public Text timeText;
    public Text GoalText;
    public Text LapText;
    public Text LapCount;

    private int count;
    public bool cangoal,goalnow,StartGoalLine;
    private float seconds, minutes;
    // private bool Lap = false;
    public static RaceSystem instance;

    void Start()
    {
        cangoal = false;
        goalnow = false;
        StartGoalLine = false;
        GoalText.text = "";
        LapCount.text = "LAP 1/1";
    }

    public void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
    }

    void Update()
    {
        timer();
        LapCount.text = "LAP：" + (count /2).ToString();
    }

    private void OnTriggerEnter(Collider other)
    {
        // if(other.gameObject.tag == "Lap"){
        //     Destroy(other.gameObject);
        //     count += 1;
        //     if(count == 1){
        //         Lap = true;
        //         Debug.Log("true!");
        //     }
        //     else{
        //         Lap = false;
        //     }
        // }

        if(other.gameObject.tag == "CheckPoint")//チェックポイントに触れた
        {
            // Destroy(other.gameObject);
            
        }
        if(other.gameObject.tag == "Line")//スタートラインに触れた
        {
            count += 1;
            Debug.Log(count);
            
        //     if(count == 2)//チェックポイントをすべて通ったか
        //     {
        //         Debug.Log("GOAL!");
        //         StartGoalLine = false;
        //         goalnow = true;
        //         // Goal.text = "GOAL";
        //     }

        //     else{
        //         StartGoalLine = true;
        //     }
        }
    }

    void timer()
    {
        if (StartGoalLine)
        {

            seconds += Time.deltaTime;
        }

        if(seconds >= 60)
        {
            minutes++;
            seconds -= 60;
        }

        if (!goalnow)
        {
            //ゴールしてない
            timeText.text = "Time " + minutes.ToString("00") + " : " + ((int)seconds).ToString("00");
        }

        // if(!Lap){
        //     LapText.text = "Lap " + minutes.ToString("00") + " : " + ((int)seconds).ToString("00");
        //     LapCount.text = "LAP 2/2";
        // }

        else
        {
            //ゴールした
            timeText.text = "Time " + minutes.ToString("00") + " : " + ((int)seconds).ToString("00");
            GoalText.text = "GOAL"; 
            // LapText.text = "Lap " + minutes.ToString("00") + " : " + ((int)seconds).ToString("00");
            // LapCount.text = "LAP 1/2";        
        }

        if(goalnow == true){
            
            // StartCoroutine(LoadNextScene());
        }
    }

    // IEnumerator LoadNextScene(){
    //     if(!goalnow == false){
    //         yield return new WaitForSeconds(3f);
    //         SceneManager.LoadScene("Opening");
    //     }
        
    // }
}