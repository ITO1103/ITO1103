#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int sum = 0;
    int large;
    cin >> N;
    auto A = vector<int>(N);
    

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<N;i++){
        large = A.size();
        if(A[large-1] != A[large-2]){
            break;
        }else if(A[large-1] == A[large-2]){
            sum = 0;
            sum = A[large-1] + A[large-2];
            A.pop_back();
            A.pop_back();
            A.push_back(sum);
        }
    }

    cout << A.size() << endl;
}
