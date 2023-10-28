#include <bits/stdc++.h>
using namespace std;
int main() {
    double d;
    int n;
    cin >> d >> n;
    string str = "%.";
    str += to_string(n);
    str += "f\n";

    printf(str.c_str(), d);
}