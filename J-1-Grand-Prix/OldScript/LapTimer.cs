using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LapTimer : MonoBehaviour
{
    public GameObject LapTimeDisplay;
    public GameObject LapCounter;
    public GameObject FinishPanel;
    public GameObject RaceFinish;
    public GameObject CurrentTime;
    public GameObject BestTime;

    private int lapCounter = 0;
    private float currentTime = 0f;
    private float bestTime = Mathf.Infinity;
    private bool finishedRace = false;

    private void Start()
    {
        LapCounter.GetComponent<Text>().text = "Lap: " + lapCounter.ToString() + "";
    }

    private void Update()
    {
        if (!finishedRace)
        {
            currentTime += Time.deltaTime;
            CurrentTime.GetComponent<Text>().text = FormatTime(currentTime);
        }
    }

    private void OnTriggerEnter(Collider other)
{
    if (other.gameObject.CompareTag("Lap"))
    {
        if (lapCounter < 99999)
        {
            StartCoroutine(RecordLapTime());
        }
        else
        {
            finishedRace = true;
            FinishPanel.SetActive(true);
            RaceFinish.GetComponent<Text>().text = "Race Finish Time: " + FormatTime(bestTime);
        }
    }
}

private IEnumerator RecordLapTime()
{
    lapCounter++;
    LapCounter.GetComponent<Text>().text = "Lap: " + lapCounter.ToString() + "";
    LapTimeDisplay.GetComponent<Text>().text = "Last: " + FormatTime(currentTime);
    if (currentTime < bestTime)
    {
        bestTime = currentTime;
        BestTime.GetComponent<Text>().text = "Fastest: " + FormatTime(bestTime);
    }
    currentTime = 0f;
    yield return new WaitForSeconds(2f); // 2秒待機
}


    private string FormatTime(float time)
    {
        int minutes = Mathf.FloorToInt(time / 60f);
        int seconds = Mathf.FloorToInt(time % 60f);
        int milliseconds = Mathf.FloorToInt((time * 1000f) % 1000f);
        return string.Format("{0:00}:{1:00}:{2:000}", minutes, seconds, milliseconds);
    }
}