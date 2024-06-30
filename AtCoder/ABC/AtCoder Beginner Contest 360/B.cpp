#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    string T;
    bool flag = false;

    cin >> S >> T;

    // Tの最初の文字がSに含まれているか
    for(int i = 0; i < S.size(); i++){
        // 一致する文字がi番目
        if(S.at(i) == T.at(0)){
            //T.at(0)がSの一番後ろにある場合すぐさまbreak(TLE回避)
            if(S.back() == T.at(0)){
                break;
            }
            for(int j = 1; i + j * (T.size() - 1) < S.size(); j++){
                flag = true;
                // S.at(i + j * k)がT.at(k)と一致しているか
                for(int k = 0; k < T.size(); k++){
                    if(S[i + j * k] != T[k]){
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag == true){
            break;
        }
    }

    if(flag== true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
