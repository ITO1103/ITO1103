#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,Q;
	map<string,int> S;
	map<string,int> T;
	cin >> N >> Q;

	for(int i=0;i<N;i++){
		string s;
		int x;
		cin >> s;
		cin >> x;
		S[s] = x;
	}
}