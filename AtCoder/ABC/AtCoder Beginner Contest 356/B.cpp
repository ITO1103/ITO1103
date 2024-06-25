#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> A(M);
    vector<vector<int>> X(N,vector<int>(M));
    vector<int> SUM(M);
    bool flag = true;

    for(int i=0;i<M;i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> X[i][j];
            SUM[j] += X[i][j];
        }
    }

    for(int i=0;i<M;i++){
        if(SUM[i] < A[i]){
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    //debug
    // for(int i=0;i<N;i++){
    //     for(int j=0;j<M;j++){
    //         cout << X[i][j] << " ";
    //     }
    //     cout << endl;
    // }

}