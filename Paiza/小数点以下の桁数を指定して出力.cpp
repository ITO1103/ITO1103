#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    int M[Q];
    double N[Q];
    for(int i=0;i<Q;i++){
        cin >> N[i] >> M[i];
        //cout << setprecision(M[i]) << N[i] << endl;
    }
    for(int i=0;i<Q;i++){
        //cout << setprecision(M[i]) << N[i] << setw(M[i]) << setfill('0') << endl;
        cout << fixed << setprecision(M[i]) << setw(M[i] + 1) << setfill('0') << N[i] << endl;
    }

}