#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    set<int> A;
    cin >> N;
    for(int i=0;i<N;i++){
        int x;
        cin >> x;
        A.insert(x);
    }
    // for autoでfor(int i=0;i<N;i++)のように出力できる
    int count = 0;
    for(auto x : A){
        if(count == A.size() - 1){
            cout << x;
        }else{
            cout << x << " ";
        }
        count++;
        
    }
    cout << endl;
}