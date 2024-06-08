#include <bits/stdc++.h>
using namespace std;

int main(){
    int upper=0, lower=0, ans=0;
    string S;
    cin >> S;
    for(int i=0;i<S.size();i++){
        if(isupper(S[i])){
            upper++;
        }else if(islower(S[i])){
            lower++;
        }
    }

    if(lower < upper){
        for(int i=0;i<S.size();i++){
            if(islower(S[i])){
                S[i] = toupper(S[i]);
            }
        }
    }else{
        for(int i=0;i<S.size();i++){
            if(isupper(S[i])){
                S[i] = tolower(S[i]);
            }
        }
    }
    cout << S << endl;
}