#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    vector<string> C(N);


    int all = 0;
    for(int i=0;i<N;i++){
        cin >> S.at(i);
        cin >> C.at(i);
        all += stoi(S.at(i));
    }
    cout << all << endl;
}