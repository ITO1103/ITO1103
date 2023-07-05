using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class msel_to_csel : MonoBehaviour
{
    public Image[] _go;//GameObjectのこと。実装時には画像に変更する。

    public Color[] _color;//色変更。実装時には画像のカラーを変更する

    public int i=0;
    public int Mode=4;
    public string[] _text={"未実装！実装に向けて工事中！","ひっくり返せ→そのスピードで","走ろう。新しい自分が待っている。","未実装！実装に向けて工事中！"};
    public TextMeshProUGUI tx;
    public Image image;
    public Sprite[] _imageSprite;
    public static  bool rankflag=false;
    public static bool taflag=false;
    public static bool npcflag=false;
    public static bool freeflag=false;
    public TextMeshProUGUI pls;
    
    private void Start(){
        if(pls_to_msel.soloflag){
            pls.text="SoloMode";
        }
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
            return_data(i,Mode,_go,_color,_text);
        yield return new WaitForSeconds(0.3f);   
        }else if(Input.GetKey(KeyCode.LeftArrow)){
            i--;
            if(i==0){
                i=Mode;
            }
            return_data(i,Mode,_go,_color,_text);
        yield return new WaitForSeconds(0.3f);//カーソル移動時に待ち時間を作る   
        }
        if(Input.GetKey(KeyCode.Return)){
            if(i==2){
                taflag=true;
                SceneManager.LoadScene("carsel_Time");
            }else if(i==3){
                npcflag=true;
                SceneManager.LoadScene("carsel_CPU");
            }else{

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
        image.GetComponent<Image>().sprite=_imageSprite[i-1];
    }
}
