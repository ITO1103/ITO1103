#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int count = 0;
    cin >> N;
    N *= 2;
    vector<int> A(N);

    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }

    for(int i = 0; i < N-2; i++){
        if(A.at(i) == A.at(i+2)){
            count++;
        }
    }

    cout << count << endl;

    
}