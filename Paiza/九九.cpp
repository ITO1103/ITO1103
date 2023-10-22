#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(j==8){
                cout << (i+1)*(j+1);
            }else{
                cout << (i+1)*(j+1) << " ";
            }
        }
        cout << endl;
    }
}