#include <iostream>
using namespace std;

int main() {
    string S;
    for (int i = 0; i < 2; ++i) {
        getline(cin, S, ',');
        cout << S << endl;
    }
    getline(cin, S);
    cout << S << endl;
}