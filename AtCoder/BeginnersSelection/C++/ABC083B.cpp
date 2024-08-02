#include <bits/stdc++.h>
using namespace std;

/*
nの各桁の和を返す
https://qiita.com/dsy_i07/items/5de9417ff235d5aa6a42
*/
int digit_sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int N,A,B,sum=0;
    cin >> N >> A >> B;
    
    for(int i=1; i<=N; i++){
        int d_sum = digit_sum(i);
        if(A <= d_sum && d_sum <= B){
            sum += i;
        }
    }
    cout << sum << endl;


}
