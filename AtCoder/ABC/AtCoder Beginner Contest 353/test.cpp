#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N+1);
  vector<int> ans(N);
  int Z = 10;
  // int k = 0;
  int X = 0;
  int sum = 0;
  for (int i = 0; i < 7; i++) {
    Z *= 10;
    // 100000000
  }
  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }
  for (int i = 1; i < N; i++) {
    for (int j = i + 1; j <= N; j++) {
      sum += ((A[i] + A[j]) % Z);
      cout << i << " " << j << endl;
      cout<<A[i] + A[j]<<endl;
      cout<<((A[i] + A[j]) % Z)<<endl;
      // ans[k] = ((A[i] + A[j]) % Z);
      //  k++;
    }
  }
  // cout << accumulate(ans.begin(), ans.end(), 0) << endl;
  //cout << sum << endl;
}