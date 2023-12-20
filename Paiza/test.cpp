#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(j==8){
                cout << setw(2) << setfill(' ') << (i+1)*(j+1) << endl;
            }else{
                cout << setw(2) << setfill(' ') << (i+1)*(j+1) << " | ";
            }
        }
        if(i<8){
            for(int j=0;j<9 * 2 + 3 * 8;j++){
            cout << "=";
        }
        cout << endl;
        }
        
    }
}