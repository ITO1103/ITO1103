#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,T;
    cin >> N >> T;
    vector<int> hole(T);
    vector<vector<int>> line(N*N);
    bool flag = false;
    int number = 1;

    for(int i=0;i<T;i++){
        cin >> hole.at(i);
    }
    
    sort(hole.begin(),hole.end());

    //全ての数字をとりあえずlineに入れる
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            line.at(i).at(j)=number;
            number++;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << line.at(i).at(j) << " ";
        }
    }

    /*多次元配列に入れて、それぞれの配列で
    横一列なら、配列の要素全て
    縦一列なら、配列のat(i)が同じ
    斜めなら,at(i)に、下の階層に行くについれて++か--をすればいいと思ったけど実行がうまくいきませんでした。
    */

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    

    
}