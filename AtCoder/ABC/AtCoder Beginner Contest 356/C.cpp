#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M,K,ans=0;
    cin >> N >> M >> K;
    vector<int> C(M);
    vector<char> R(M);
    vector<vector<int>> A(M,vector<int>(M));


    for(int i=0;i<M;i++){
        cin >> C[i];
        for(int j=0;j<C[i];j++){
            cin >> A[i][j];
        }
        cin >> R[i];
    }
    //debug
    // for(int i=0;i<M;i++){
    //     cout << C[i] << " ";
    //     for(int j=0;j<C[i];j++){
    //         cout << A[i][j] << " ";
    //     }
    //     cout << R[i] << endl;
    // }
    // OK

    
    cout << ans << endl;
}