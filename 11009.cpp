#include<bits/stdc++.h>
using namespace std;

int main(){
    int N =11009;
    for(int i=0; i<=N; i++){
        for(int j=0; j<=N; j++){
            if(i * j == 11009){
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << "end" << endl;
}