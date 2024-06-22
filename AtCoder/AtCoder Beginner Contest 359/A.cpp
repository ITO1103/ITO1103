#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,count=0;
    cin >> N;
    vector<string> S(N);

    for(int i = 0; i < N; i++){
        cin >> S.at(i);
        if(S.at(i) == "Takahashi"){
            count++;
        }
    }
    cout << count << endl;


}