using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class car_to_map : MonoBehaviour
{
    public Image[] _go;//GameObjectのこと。実装時には画像に変更する。

    public Color[] _color;//色変更。実装時には画像のカラーを変更する

    public int i=1;
    public int Mode=9;
    public string[] _text;
    public TextMeshProUGUI tx;
    public GameObject[] _car;
    public static  bool _86=false;
    public static  bool _Evija=false;
    public static  bool _Furia=false;
    public static  bool _LX6=false;
    public static  bool _Odesa=false;
    public static  bool _SP2=false;
    public static  bool _Swift=false;
    public static  bool _X7=false;
    public static  bool _Yaris=false;
    public TextMeshProUGUI msel;
    
    private void Start(){
        if(msel_to_csel.rankflag){
            msel.text="Rank";
        }else if(msel_to_csel.taflag){
            msel.text="TA";
        }else if(msel_to_csel.npcflag){
            msel.text="vsNPC";
        }else if(msel_to_csel.freeflag){
            msel.text="Free";
        }
         StartCoroutine(DelayCoroutine());
    }

    // Update is called once per frame
    private IEnumerator DelayCoroutine()
    {
        for(int j=1;j-1<Mode;j++){
            _go[j-1].GetComponent<Image>().color=_color[0];
            if(j==i){
                _go[j-1].GetComponent<Image>().color=_color[1];
            }
        }
        while(true){
        Vector3 _pos=_car[i-1].transform.position;
        if(Input.GetKey(KeyCode.RightArrow)){//左右に入力があった際に色を変更する
            i++;
            if(i>Mode){
                i=1;
            }
            return_data(i,Mode,_go,_color,_text);
            car_change(_car,i,Mode,_pos);
        yield return new WaitForSeconds(0.3f);   
        }else if(Input.GetKey(KeyCode.LeftArrow)){
            i--;
            if(i==0){
                i=Mode;
            }
            return_data(i,Mode,_go,_color,_text);
            car_change(_car,i,Mode,_pos);
        yield return new WaitForSeconds(0.3f);//カーソル移動時に待ち時間を作る   
        }
        if(Input.GetKey(KeyCode.Return)){
            if(i==1&&msel_to_csel.npcflag){
                SceneManager.LoadScene("86_C");
            }else if(i==2&&msel_to_csel.npcflag){
                SceneManager.LoadScene("Evija_C");
            }else if(i==3&&msel_to_csel.npcflag){
                SceneManager.LoadScene("Furia_C");
            }else if(i==4&&msel_to_csel.npcflag){
                SceneManager.LoadScene("LX600_C");
            }else if(i==5&&msel_to_csel.npcflag){
                SceneManager.LoadScene("Odyssey_C");
            }else if(i==6&&msel_to_csel.npcflag){
                SceneManager.LoadScene("SP2_C");
            }else if(i==7&&msel_to_csel.npcflag){
                SceneManager.LoadScene("Swift_C");
            }else if(i==8&&msel_to_csel.npcflag){
                SceneManager.LoadScene("X7_C");
            }else if(i==9&&msel_to_csel.npcflag){
                SceneManager.LoadScene("Yaris_C");
            }else if(i==1&&msel_to_csel.taflag){
                SceneManager.LoadScene("86_T");
            }else if(i==2&&msel_to_csel.taflag){
                SceneManager.LoadScene("Loutus_T");
            }else if(i==3&&msel_to_csel.taflag){
                SceneManager.LoadScene("Grotti_T");
            }else if(i==4&&msel_to_csel.taflag){
                SceneManager.LoadScene("Lexus_T");
            }else if(i==5&&msel_to_csel.taflag){
                SceneManager.LoadScene("Honda_T");
            }else if(i==6&&msel_to_csel.taflag){
                SceneManager.LoadScene("Ferrari_T");
            }else if(i==7&&msel_to_csel.taflag){
                SceneManager.LoadScene("Swift_T");
            }else if(i==8&&msel_to_csel.taflag){
                SceneManager.LoadScene("BMW_T");
            }else if(i==9&&msel_to_csel.taflag){
                SceneManager.LoadScene("Yaris_T");
            }
        }
        yield return new WaitForSeconds(0.1f);
        }
    }
    void return_data(int i,int Mode,Image[] _go,Color[] _color,string[] _text){
        for(int j=1;j-1<Mode;j++){
            _go[j-1].GetComponent<Image>().color=_color[0];
            if(j==i){
                _go[j-1].GetComponent<Image>().color=_color[1];
            }
        }
        tx.text=_text[i-1];
    }
    void car_change(GameObject[] _car,int i,int Mode,Vector3 _pos){
        Vector3 pos=new Vector3(300f,300f,300f);
        for(int j=1;j-1<Mode;j++){
            _car[j-1].transform.position=pos;
            if(j==i){
                _car[j-1].transform.position=_pos;;
            }
        }
    }
}