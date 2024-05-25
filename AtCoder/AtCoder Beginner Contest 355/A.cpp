#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    if(A==1){
        if(B==1){
            cout << "-1" << endl;
        }else if(B==2){
            cout << "3" << endl;
        }else if(B==3){
            cout << "2" << endl;
        }
    }
    if(A==2){
        if(B==1){
            cout << "3" << endl;
        }else if(B==2){
            cout << "-1" << endl;
        }else if(B==3){
            cout << "1" << endl;
        }
    }
    if(A==3){
        if(B==1){
            cout << "2" << endl;
        }else if(B==2){
            cout << "1" << endl;
        }else if(B==3){
            cout << "-1" << endl;
        }
    }
}