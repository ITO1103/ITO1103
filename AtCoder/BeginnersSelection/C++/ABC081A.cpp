#include <bits/stdc++.h>
using namespace std;

int main(){
    int A;
    int s1,s2,s3;
    cin >> A;
    s1 = A/100;
    s2 = (A%100)/10;
    s3 = A%10;
    cout << s1+s2+s3 << endl;
}