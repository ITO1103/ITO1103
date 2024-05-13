#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,count=0;
    cin >> N;
    vector<int> A(N);
    bool flag = true;
    for(int i=0;i<N;i++){
        cin >> A.at(i);
    }
    // for(int i=0;i<N;i++){
    //     int count2=0;
    //     if(A.at(i)%2==0){
    //         A.at(i) = A.at(i)/2;
            
    //     }else{
    //         break;
    //     }
    // }
    while(flag){
        for(int i=0;i<N;i++){
            if(A.at(i)%2==0){
                A.at(i) = A.at(i)/2;
            }else{
                flag = false;
                break;
            }
        }
        if(flag){
            count++;
        }
    }
    cout << count << endl;
}