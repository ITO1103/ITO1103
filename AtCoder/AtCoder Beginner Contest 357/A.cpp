#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M,ans=0;
    cin >> N >> M;
    vector<int> H(N);

    for(int i=0;i<N;i++){
        cin >> H[i];
    }

    for(int i=0;i<N;i++){
        if(M - H[i] >= 0){
            M -= H[i];
            ans++;
        }else{
            break;
        }
    }
    cout << ans << endl;
}