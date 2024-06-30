#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<char> S;
    int Rice, Miso;
    bool flag = false;
    for(int i = 0; i < 3; i++){
        char s;
        cin >> s;
        S.push_back(s);
    }

    //output
    for(int i = 0; i < 3; i++){
        if(S.at(i) == 'R'){
            Rice = i;
        }else if(S.at(i) == 'M'){
            Miso = i;
        }
    }
    if(Rice < Miso){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}