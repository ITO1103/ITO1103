// 標準入力で指定した回数を繰り返す
#include <iostream>
using namespace std;

int main() {
  int count;
  cin >> count;

  string greeting = "Hello paiza";
  for(int i=0;i<count;i++){
      cout << greeting << endl;
  }
  

}
