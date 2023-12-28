#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i=0;
    cin >> n;
    int m[n];
    //int a[m[i]];
    for (int i=0; i<n; i++) {
        cin >> m[i];
        //int a[m[i]];
        for(int j=0; j<m[i]; j++) {
            cin >> a[j];
        }
    }
    for(int j=0;j<m[i];j++){
        cout << a[j] << " ";
    }
}