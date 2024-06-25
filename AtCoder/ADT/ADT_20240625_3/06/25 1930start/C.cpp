#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(K);
    vector<int> L(Q);

    for(int i = 0; i < K; i++){
        cin >> A.at(i);
    }
    for(int i = 0; i < Q; i++){
        cin >> L.at(i);
    }

    for(int i = 0; i < Q; i++) {
        
        if (A[L[i] - 1] != N) {
            if (!(L[i] < K && A[L[i]] == A[L[i] - 1] + 1)) {
                A[L[i] - 1]++;
            }
        }
    }

    for(int i = 0; i < K; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}