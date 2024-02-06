#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
	map<string,int> A;
	cin >> N >> M;
	for(int i=0;i<N;i++){
		string s;
		int x;
		cin >> s;
		cin >> x;
		A[s] = x;
	}
	for(int i=0;i<M;i++){
		string s;
		cin >> s;
		if(A.find(s) != A.end()){
			cout << A[s] << endl;
		}else{
			cout << "-1" << endl;
		}
        
        
	}
	
}