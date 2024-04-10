#include <bits/stdc++.h>
using namespace std;

// 半加算器のプログラム
pair<int, int> halfAdder(int a, int b) {
    int c = a & b;
    int s = a ^ b;
    return {c, s};
}

int main() {
    int a, b, c1;
    cin >> a >> b >> c1;
    auto [cx, sy] = halfAdder(a, b);
    auto [cy, s] = halfAdder(sy, c1);
    int c2 = cx ^ cy;
    cout << c2 << " " << s << endl;
}