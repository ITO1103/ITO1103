//単純に配列の中を探索する方法
#include <bits/stdc++.h>
using namespace std;
int main() {
    set<int> nums;

    int N, B;
    cin >> N >> B;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        nums.insert(A);
    }
    if (nums.find(B) != nums.end()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}