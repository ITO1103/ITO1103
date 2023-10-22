#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int A[N],B[M];
    
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<M;i++){
        cin >> B[i];
    }
    int j=0,k=B[j];
    for(int i=0;i<N;i++){
        if(i+1==k){
            cout << A[i] << endl;
            j++;
            k+=B[j];
        }else{
            cout << A[i] << " ";
        }
    }
}
