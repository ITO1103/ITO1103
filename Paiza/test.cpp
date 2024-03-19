#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 0;
    int A,B,C;
    cin >> A >> B >> C;
    N = N + A;
    N = N * B;
    N = N % C;
    cout << N << endl;
}