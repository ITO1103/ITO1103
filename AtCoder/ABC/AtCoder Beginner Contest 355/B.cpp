#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> A(N),B(M),C(M+N);
    bool flag = false;

    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }
    for(int i=0;i<M;i++){
        cin >> B.at(i);
    }
    //小さい順に並び替える
    sort(A.begin(),A.end());

    // for(int i=0;i<N;i++){
    //     cout << A.at(i) << " ";
    // }
    // cout << endl;

    C = A;
    C.insert(C.end(), B.begin(), B.end());
    sort(C.begin(),C.end());

    // for(int i=0;i<M+N;i++){
    //     cout << C.at(i) << " ";
    // }
    // cout << endl;

    for(int i=0;i<C.size()-1;i++){
        for(int j=0;j<A.size()-1;j++){
            if(C.at(i) == A.at(j)){
                if(C.at(i+1) == A.at(j+1)){
                    flag = true;
                    break;
                }
            }
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}