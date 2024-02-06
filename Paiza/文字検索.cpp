#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> A(N);
    vector<int> count(26,0);
    for(int i=0;i<N;i++){
        cin >> A[i];
        for(char c : A[i]){
            if(isalpha(c)){
                c = tolower(c);
                count[c - 'a']++;
            }
        }
    }
    for(int i=0;i<26;i++){
        if(i != 25){
            cout << count[i] << " ";
        }else{
            cout << count[i] << endl;
        }
    }
}