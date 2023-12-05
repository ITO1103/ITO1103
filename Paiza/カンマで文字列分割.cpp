#include <iostream>
using namespace std;


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
    string str,s;
    getline(cin, str);
    stringstream ss{str};
    while(getline(ss, s, ',')) {
        v.push_back(s);
    }
    for(const string& s : v) {
        cout << s << endl;
    }
}


// 区切る数を指定する場合
// int main() {
//     int N;
//     cin >> N;
//     string S, dummy;
//     getline(cin, dummy);
//     for (int i = 0; i < N-1; ++i) {
//         getline(cin, S, ',');
//         cout << S << endl;
//     }
//     getline(cin, S);
//     cout << S << endl;
// }