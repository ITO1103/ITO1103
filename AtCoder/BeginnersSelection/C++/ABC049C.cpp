#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    string D = "dream";
    string D2 = "dreamer";
    string E = "erase";
    string E2 = "eraser";
    bool flag = false;

    cin >> S;

    //SがD,D2,E,E2だけで構成されているか判定
    for(int i = 0; i < S.size();){
        if(S.substr(i, 5) == D){
            i += 5;
            if(S.substr(i, 5) == D2){
                i += 5;
            }
        }else if(S.substr(i, 5) == E){
            i += 5;
            if(S.substr(i, 5) == E2){
                i += 5;
            }
        }else{
            flag = false;
            cout << "NO" << endl;
            break;
        }
    }

    if(flag = true){
        cout << "YES" << endl;
    }
    
}