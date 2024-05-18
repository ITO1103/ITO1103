#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> C(N);
    int A_min;
    int C_max;
    bool flag = false;

    for(int i=0;i<N;i++){
        cin >> A.at(i);
        cin >> C.at(i);
    }

    vector<pair<int,int>> paired(N);
    for(int i=0;i<N;i++){
        paired.at(i) = make_pair(A.at(i),C.at(i));
    }

    sort(paired.begin(),paired.end());

    for(int i=0;i<N;i++){
        A.at(i) = paired.at(i).first;
        C.at(i) = paired.at(i).second;
    }

    //Aが大きいかつCが小さいのが他にあると負け
    //一番小さいAから見ていって、それに対応するCより小さいCがあると消す
    for(int i=N-1;i>=0;i--){
        if(C.at(0) > C.at(i)){
            A.erase(A.begin());
            C.erase(C.begin());
        }
    }

    cout << A.size() << endl;
    for(int i=0;i<A.size();i++){
        cout << A.at(i) << " ";
    }
    cout << endl;
}