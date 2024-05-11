#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> ans(N);
    int Z = 10;
    int k = 0;
    int X = 0;
    for(int i=0;i<7;i++){
        Z *= 10;
        //100000000
    }
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            ans[k] = ((A[i] + A[j]) % Z);  
            cout << ans[k] << endl;         
            k++;
        }
    }
    cout << accumulate(ans.begin(), ans.end(), 0) << endl;
}