#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    bool flag = false;
    vector<int> H(N);
    for(int i=0;i<N;i++){
        cin >> H[i];
        if(H[0] < H[i]){
            flag = true;
        }
    }

    if(flag == false){
        cout << -1 << endl;
        return 0;
    }else{
        bool taller = false;
        for(int i=0;i<N;i++){
            if(H[i] > H[0]){
                taller = true;
                cout << (i+1) << endl; //この実装でできたけど、右側にもっと高いのがある場合は...?
                break;
            }
        }
    }
}