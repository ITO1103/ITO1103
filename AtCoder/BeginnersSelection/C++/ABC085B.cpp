#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, ans=1;
    cin >> N;
    vector<int> d(N);
    for(int i = 0; i < N; i++){
        cin >> d.at(i);
    }

    // 降順にソート
    sort(d.rbegin(), d.rend());

    for(int i=0; i<(N-1); i++){
        if(d.at(i) > d.at(i+1)){
            ans++;
        }
    }
    cout << ans << endl;
}