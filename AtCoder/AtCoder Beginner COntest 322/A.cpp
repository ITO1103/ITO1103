#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    int flag = 0;
    int mark = 0;

    for(int i=0;i<N-2;i++){
        if(S.at(i)=='A'){
            if(S.at(i+1)=='B'){
                if(S.at(i+2)=='C'){
                    // cout << i << endl;
                    mark = i+1;
                    flag = 1;
                    break;
                }
            }
        }
    }
    if(flag==0){
        cout << "-1" << endl;
    }else{
        cout << mark << endl;
    }
}