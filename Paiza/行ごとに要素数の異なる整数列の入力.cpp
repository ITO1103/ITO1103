#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int M[N];
  for(int i = 0; i < N; i++){
    cin >> M[i];
    for(int j = 0; j < M[i]; j++){
      int a;
      cin >> a;
      if(j == M[i]-1) cout << a << endl;
      else cout << a << ' ';
    }
  }
  return 0;
}