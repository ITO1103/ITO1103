#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, sum=0;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a.at(i);
    }

    // 降順にソート
    sort(a.rbegin(), a.rend());

    for(int i=0; i<N; i++){
        if(i%2 == 0){
            sum += a.at(i);
        }else{
            sum -= a.at(i);
        }
    }
    cout << sum << endl;
}