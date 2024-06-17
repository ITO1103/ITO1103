#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,A,sec,NowTime=0;//人数,買う時間
    cin >> N >> A;
    bool flag = false;
    vector<int> T(N);//秒後
    vector<int> EndTime(N);

    for(int i=0;i<N;i++){
        cin >> T.at(i);
    }

    for (int i = 0; i < N; i++) {
        if (NowTime < T[i]) {
            NowTime = T[i];
        }

        EndTime[i] = NowTime + A;
        
        NowTime += A;
    }

    for (int i = 0; i < N; i++) {
        cout << EndTime[i] << endl;
    }
}