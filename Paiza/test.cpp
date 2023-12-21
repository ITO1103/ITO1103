#include <bits/stdc++.h>
using namespace std;

int main() {  
    int H,W,A,B;
    cin >> H >> W >> A >> B;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout << "(" <<A << ", " << B << ")";
            if(j<W-1){
                cout << " | ";
            }
        }
        if(i<H-1){
            cout << endl;
            for(int k=0;k<6*W+3*(W-1);k++){
                cout << "=";
            }
            cout << endl;
        }else{
            cout << endl;
        }
       
    }
}