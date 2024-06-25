#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    if((A+1) == B){
        if(A % 3 != 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        cout << "No" << endl;
    }
}