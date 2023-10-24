#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int A[n], B[m];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    int begin = 0;  // 1行で出力する最初の値のインデックス
    for (int i = 0; i < m; i++) {
        int end = begin + B[i] - 1;  // 1行で出力する最後の値のインデックス
        for (int j = begin; j <= end; j++) {
            cout << A[j];
            if (j < end) {
                cout << " ";
            } else {
                cout << endl;
            }
        }
        begin = end + 1; // i番目に出力する数列の始点はi - 1 番目に出力する数列の終点+ 1
    }
}