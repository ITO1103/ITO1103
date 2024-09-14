#include <bits/stdc++.h>
using namespace std;

int main() {
    char SAB, SAC, SBC;
    cin >> SAB >> SAC >> SBC;

    if(SAB == '<' && SAC == '<'){
        if(SBC == '<'){
            cout << "B" << endl;
        }else{
            cout << "C" << endl;
        }
    }else if(SAB == '>' && SAC == '>'){
        if(SBC == '<'){
            cout << "C" << endl;
        }else{
            cout << "B" << endl;
        }
    }else if(SAB == '<' && SAC == '>'){
        cout << "A" << endl;
    }else if(SAB == '>' && SAC == '<'){
        cout << "A" << endl;
    }

    return 0;
}
