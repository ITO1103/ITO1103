#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, question = 0;
    cin >> N >> K;
    vector<string> S(N);

    for(int i = 0; i < N; i++){
        cin >> S.at(i);
        if(S.at(i) == "?"){
            question++;
        }
    }

    for(int i = 0; i < question; i++){
        
    }
}