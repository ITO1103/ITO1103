#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            s[i] = '1';
        }else if(s[i] == '1'){
            s[i] = '0';
        }
    }
    cout << s << endl;
}