#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    //入力ABCをvectorに格納
    vector<int> vec = {A, B, C};
    sort(vec.begin(), vec.end());

    //出力
    cout << vec.at(2) - vec.at(0) << endl;
}
