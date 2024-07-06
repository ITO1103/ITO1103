#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, ans = 200000;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> B(N);
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }


    sort(A.begin(), A.end());
    B = A;

    //output
    for(int i = 0; i < N; i++){
        cout << B.at(i) << " ";
    }
    cout << endl;


    for(int i = 0; i < N - 1; i++){
        for(int j = i+1; j < N; j++){
            B.erase(B.begin() + i);
            B.erase(B.begin() + j);
            int tmp = (B.front() - B.back());
            if(tmp < ans){
                ans = tmp;
            }
            
            
            //配列Bをもとの状態に戻す(AからBにコピーする)
            B = A;
        }
    }

    cout << ans << endl;
}