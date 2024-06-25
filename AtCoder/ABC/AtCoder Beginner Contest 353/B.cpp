#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    int seat = K;
    int ans = 1;
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        if(seat - A[i] >= 0){
            seat -= A[i];
        }else{
            ans++;
            seat = K;
            seat -= A[i];
        }
    }
    cout << ans << endl;

}