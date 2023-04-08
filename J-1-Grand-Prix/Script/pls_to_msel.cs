using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class pls_to_msel : MonoBehaviour
{    
    public Image[] _go;//GameObjectのこと。実装時には画像に変更する。

    public Color[] _color;//色変更。実装時には画像のカラーを変更する
    public Text[] _text;

    public int i=0;
    public int Mode=2;
    public static bool soloflag=false;
    public static bool maltiflag=false;
    
    
    private void Start(){
         StartCoroutine(DelayCoroutine());
    }

    // Update is called once per frame
    private IEnumerator DelayCoroutine()
    {
        for(int j=1;j-1<Mode;j++){//選択していないときの色に一括変更
            _go[j-1].GetComponent<Image>().color=_color[0];
        }
        while(true){
        if(Input.GetKey(KeyCode.RightArrow)){//左右に入力があった際に色を変更する
            i++;
            if(i>Mode){
                i=1;
            }
            return_data(i,Mode,_go,_color);
        yield return new WaitForSeconds(0.1f);   
        }else if(Input.GetKey(KeyCode.LeftArrow)&&i!=0){
            i--;
            if(i==0){
                i=Mode;
            }
            return_data(i,Mode,_go,_color);
        yield return new WaitForSeconds(0.1f);//カーソル移動時に待ち時間を作る   
        }
        if(Input.GetKey(KeyCode.Return)){
            if(i==2){}
            else if(i==1){
                soloflag=true;
            SceneManager.LoadScene("ModeSelect");
            }
        }
        yield return new WaitForSeconds(0.1f);
        }
    }
    
    void return_data(int i,int Mode,Image[] _go,Color[] _color){
        for(int j=1;j-1<Mode;j++){
            _go[j-1].GetComponent<Image>().color=_color[0];
            if(j==i){
                _go[j-1].GetComponent<Image>().color=_color[1];
            }
        }

    }
}
