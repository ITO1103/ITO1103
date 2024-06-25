#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,P=0;
    bool endflag = false;
    bool centerflag = false;
    cin >> N;

    vector<vector<string>> S(pow(3,N));
    cout << S.size() << endl;

    // for(int i=0;i<=N;i++){
    //     for(int j=0;j<=N;j++){
    //         //配列の一番i行に"#"を入れる
    //         if(i % 2 == 0){
    //             S[i].push_back("###");
    //         }else{
    //             S[i].push_back("#.#");
    //         }
    //     }
    // }
    for(int i=0;i<=pow(3,N);i++){
        for(int j=0;j<=N;j++){
            if(N%3==0){
                centerflag = true;
            }
            if(centerflag==true){
                cout << "...";
            }else if(i%2==0){
                cout << "###";
            }else if(i%2==1){
                cout << "#.#";
            }else{
                cout << endl;
            }
        }
        cout << endl;
    }
}