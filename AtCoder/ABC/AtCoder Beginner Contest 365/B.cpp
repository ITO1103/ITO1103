#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
        
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }

    //2番目に大きい値を求める
    int max1 = 0;
    int max2 = 0;
    for(int i=0;i<N;i++){
        if(A.at(i) > max1){
            max2 = max1;
            max1 = A.at(i);
        }else if(A.at(i) > max2){
            max2 = A.at(i);
        }
    }

    //max2の場所を求める
    int max2_index = 0;
    for(int i=0;i<N;i++){
        if(A.at(i) == max2){
            max2_index = i;
        }
    }
    cout << max2_index + 1 << endl;
}