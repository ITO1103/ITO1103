#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    //三桁ごとにカンマを入れる
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
        if ((s.size() - i - 1) % 3 == 0 && i != s.size() - 1) {
            cout << ",";
        }
    }
}
