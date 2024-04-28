#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[9];
    int b[8];
    int Asum = 0;
    int Bsum = 0;

    for(int i=0;i<9;i++){
        cin >> a[i];
        Asum += a[i];
    }

    for(int i=0;i<8;i++){
        cin >> b[i];
        Bsum += b[i];
    }
    // int Asum = reduce(a.begin(), a.end());
    // int Bsum = reduce(b.begin(), b.end());


    int dif = Asum - Bsum + 1;
    
    cout << dif << endl;
}