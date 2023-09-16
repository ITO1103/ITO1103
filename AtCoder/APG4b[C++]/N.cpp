#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int sum = 0;
    int ans = 0;
    cin >> N;
    vector<int>score(N);
    vector<int>difscore(N);

    for(int i=0;i<N;i++){
        cin >> score.at(i);
        sum += score.at(i);
    }
    ans = (sum / N);
    
    for(int i=0;i<N;i++){
        if(ans>=score.at(i)){
            difscore.at(i) = ans - score.at(i);
        }else{
            difscore.at(i) = score.at(i) - ans;
        }
        cout << difscore.at(i) << endl;
    }
}
