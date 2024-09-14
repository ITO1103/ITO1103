#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Mg;
    cin >> N >> Mg;
    vector<int> u(Mg);
    vector<int> v(Mg);
    for(int i = 0; i < Mg; i++){
        cin >> u.at(i) >> v.at(i);
    }
    int Mh;
    cin >> Mh;
    vector<int> a(Mh);
    vector<int> b(Mh);
    for(int i = 0; i < Mh; i++){
        cin >> a.at(i) >> b.at(i);
    }
    vector<vector<int>> G(N);
    return 0;
}
