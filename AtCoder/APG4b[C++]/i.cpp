#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;
 
  // パターン1
  // if (p == 1) {
  //   int price;
  //   cin >> price;
  // }
 
  // パターン2
  if (p == 2) {
    string text;
    cin >> text;
    cout << text << "!" << endl;
  }
 
  int N,price;
  cin >> price >> N;
  cout << price * N << endl;
  
}
