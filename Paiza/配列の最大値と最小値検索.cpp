#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> A(3); //vectorは動的なサイズの配列
    int max,min,ans;
    for(int i=0;i<3;i++){
        cin >> A[i];
    }
    max = *max_element(A.begin(),A.end());
    min = *min_element(A.begin(),A.end());
    ans = max - min;
    cout << ans << endl;
}