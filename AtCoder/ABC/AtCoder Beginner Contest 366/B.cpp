#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Max = 0;
    cin >> N;
    vector<string> S(N);
    for(int i = 0; i < N; i++){
        cin >> S.at(i);
        //最長の文字列の長さを取得
        if(S.at(i).length() > Max){
            Max = S.at(i).length();
        }
    }

    for (int i = 0; i < N; i++) {
        while (S.at(i).length() < Max) {
            S.at(i) += '*';
            
        }
    }

    //90度回転
    for(int i = 0; i < Max; i++){
        string Fix;
        for(int j = N - 1; j >= 0; j--){
            //cout << S.at(j).at(i);
            Fix += S.at(j).at(i);
        }
        while(Fix.back() == '*') {
            Fix.pop_back();
        }
        cout << Fix << endl;
    }
}