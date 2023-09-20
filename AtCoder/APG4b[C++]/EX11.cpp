#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, i;
  cin >> N >> A;

  // ここにプログラムを追記
  for(i=0;i<N;i++){
    int x;
    string Kigo;

    cin >> Kigo >> x;

    if(Kigo=="+"){
        A +=x;
    }else if(Kigo=="-"){
        A -=x;
    }else if(Kigo=="*"){
        A *=x;
    }else if(Kigo=="/" && x !=0){
        A /=x;
    }else{
        cout << "error" << endl;
        break;
    }
    cout << i+1 << ":" << A << endl;
  }
}
