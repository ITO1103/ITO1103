#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int str[N];
    for(int i=0;i<N;i++){
        cin >> str[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<str[i];j++){
            if(j==str[i]-1){
                cout << j+1 << endl;
            }else{
                cout << j+1 << " ";
            } 
        }
    }
}