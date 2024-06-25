#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A.at(i).at(j);
        }
    }

    for(int i = 0; i < N; i++){
        vector<int> side;
        for(int j = 0; j < N; j++){
            if(A[i][j] == 1){
                side.push_back(j + 1);
            }
        }

        for(int j = 0; j < side.size(); j++){
            if(j > 0) cout << " ";
            cout << side[j];
        }
        cout << endl;
    }


}