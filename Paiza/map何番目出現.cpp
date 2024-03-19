#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> str;

    int N, Q;
    cin >> N >> Q;
    for (int i = 1; i <= N; i++) {
        string S;
        cin >> S;
        if (str.find(S) == str.end()) {
            // Sが初めて出てきた場合
            str[S] = i;
        }
    }
    for (int i = 0; i < Q; i++) {
        string T;
        cin >> T;
        if (str.find(T) != str.end()) {
            // SのなかにTがある場合
            cout << str[T] << endl;
        } else {
            // SのなかにTがない場合
            cout << -1 << endl;
        }
    }
}