#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    //ここにプログラムを追記
    int i = 0;
    for(i < S.size()){
        if(i%2==1){
            cout << S.at(i) << endl;
        }
        i++;
    }
}