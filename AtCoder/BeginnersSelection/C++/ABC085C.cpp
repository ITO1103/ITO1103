#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Y;
    bool flag = false;
    cin >> N >> Y;

    for(int i=0; i<=N; i++){
        for(int j=0; j<=N; j++){
            for(int k=0; k<=N; k++){
                if(Y % 1000 == 0){
                    break;
                }
                if(i+j+k == N && 10000*i+5000*j+1000*k == Y){
                    cout << i << " " << j << " " << k << endl;
                    flag = true;
                    return 0;
                    break;
                }
            }
        }
    }
    if(flag == false){
        cout << "-1 -1 -1" << endl;
    }
}