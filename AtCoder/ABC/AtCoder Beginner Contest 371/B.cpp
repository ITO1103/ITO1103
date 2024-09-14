#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<int, char>> A(M);
    vector<int> done(N);

    for(int i = 0; i < M; i++){
        cin >> A.at(i).first >> A.at(i).second;
    }

    for(int i = 0; i < M; i++){
        if(A.at(i).second == 'M'){
            if(find(done.begin(), done.end(), A.at(i).first) != done.end()){
                done.push_back(A.at(i).first);
                cout << "No" << endl;
            }else{
                done.push_back(A.at(i).first);
                cout << "Yes" << endl;
            }

        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}
