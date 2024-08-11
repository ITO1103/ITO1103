#include <iostream>
using namespace std;

int main() {
    int N, T, A;
    cin >> N >> T >> A;

    int Nece = ((N / 2) + 1);

    if(T >= Nece || A >= Nece){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
