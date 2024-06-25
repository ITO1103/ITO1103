#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    char A[N][N];
    char B[N][N];
    int a,b;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> A[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> B[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i][j] != B[i][j]){
                a = i + 1;
                b = j + 1;
                break;
            }
        }
    }
    cout << a << " " << b << endl;
}