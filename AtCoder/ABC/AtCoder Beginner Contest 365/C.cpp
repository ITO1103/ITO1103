#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long N, M, Max=0;
    cin >> N >> M;
    bool infinity_flag = false;
    vector<unsigned long long> A(N);

    for(unsigned long long i=0;i<N;i++){
        cin >> A.at(i);
        if(Max < A.at(i)){
            Max = A.at(i);
        }
    }
    if((Max * N) >= M){
        infinity_flag = false;
        cout << M/N << endl;
    }else{
        infinity_flag = true;
        cout << "infinite" << endl;  
    }

    // if(infinity_flag == false){
    //     for(unsigned long long i=1;i<M;i++){
    //         if((i * N) > M){
    //             cout << i-1 << endl;
    //             break;
    //         }
    //     }
    // }
}