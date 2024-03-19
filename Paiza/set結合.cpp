#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> nums;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {  
        int A;
        cin >> A;
        nums.insert(A);
    }
    for(int i=0;i<N;i++){
        int B;
        cin >> B;
        nums.insert(B);
    }
    int count = 0;
    // 範囲ベースforループ文. constは変数の値を変更できないことを示す(他にvolatileやmutableなどがある). autoは変数の型を自動で決定する. &は参照渡し. numは変数名. numsはコンテナ名.
    // numsの全ての中の要素を順番に取り出して、それをnumとして使う
    for(const auto& num : nums) {
        if(count == nums.size() - 1){
            cout << num;
        }else{
            cout << num << " ";
        }
        count++;
    }
    cout << endl;
}