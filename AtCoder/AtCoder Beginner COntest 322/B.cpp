#include <bits/stdc++.h>
using namespace std;

int main(){
    int head = 0;
    int tail = 0;
    int ans = 0;
    int a,b,minlen;
    string S;
    string T;

    cin >> a;
    cin >> b;
    cin >> S;
    cin >> T;

    minlen = min(a,b);

    for(int i=0;i<minlen-2;i++){
        if(S.at(i)==T.at(i)){
            if(S.at(i+1)==T.at(i+1)){
               if(S.at(i+2)==T.at(i+2)){
                    head = 1;
                }
            }
        }
    }
    

    if(S.at(S.size()-1)==T.at(T.size()-1)){
        if(S.at(S.size()-2)==T.at(T.size()-2)){
           if(S.at(S.size()-3)==T.at(T.size()-3)){
                tail = 1;
            }
        }
    }

    if(head==1 && tail==1){
        ans = 0;
    }else if(head==1 && tail==0){
        ans = 1;
    }else if(head==0 && tail==1){
        ans = 2;
    }else if(head==0 && tail==0){
        ans = 3;
    }

    cout << ans << endl;
}