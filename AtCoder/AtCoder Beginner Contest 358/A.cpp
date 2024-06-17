#include <bits/stdc++.h>
using namespace std;

int main(){
    string S,T; 
    bool flag = false;
    cin >> S >> T;
    if(S=="AtCoder"){
        flag = true;
        if(T=="Land"){
            flag = true;
        }else{
            flag = false;
        }
    }else{
        flag = false;
    }


    if(flag==true){
        cout << "Yes" << endl;
    }else{ 
        cout << "No" << endl;
    }
}