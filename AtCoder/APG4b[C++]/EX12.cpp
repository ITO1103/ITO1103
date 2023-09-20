#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    //ここにプログラムを追記
    // int count1 = 0;
    int countp = 0;
    int countm = 0;
    int ans = 0;

    for(int i=0;i<S.size();i++){
        // if(S.at(i) == '1'){
        //     count1++;
        // }
        if(S.at(i)=='+'){
            countp++;
        }
        if(S.at(i)=='-'){
            countm++;
        }
    }

    ans = (countp + 1 - countm);


    // cout << count1 << endl;
    // cout << countp << endl;
    // cout << countm << endl;
    cout << ans << endl;

}