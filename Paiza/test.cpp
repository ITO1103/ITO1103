#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int length = str.length();
    for(int i=0;i<(length+2);i++){
        cout << "+";
    }
    cout << endl;
    cout << "+" << str << "+" << endl;
    for(int i=0;i<(length+2);i++){
        cout << "+";
    }
    cout << endl;
}