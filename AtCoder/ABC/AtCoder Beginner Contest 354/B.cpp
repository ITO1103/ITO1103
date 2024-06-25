#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> C(N);
    int T = 0;
    int winner = 0;

    for(int i=0;i<N;i++){
        cin >> S.at(i);
        cin >> C.at(i);
        T += C.at(i);
    }
    winner = (T%N);

    sort(S.begin(),S.end());

    cout << S.at(winner) << endl;
}