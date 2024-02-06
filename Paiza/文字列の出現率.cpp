#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
	cin >> N;
	vector<string>S(N);
	vector<int>count(N,0);

	for(int i=0;i<N;i++){
		cin >> S[i];
	}
	//同じ文字列があるかどうかを調べる
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(S[i] == S[j]){
				count[i]++;
			}
		}
	}
	//配列の重複を添え字も含めて消す
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(S[i] == S[j]){
				count[j] = 0;
			}
		}
	}
	//abc順に並べ替える
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(S[i] > S[j]){
				swap(S[i],S[j]);
				swap(count[i],count[j]);
			}
		}
	}
	//出力
	for(int i=0;i<N;i++){
		if(count[i] != 0){
			cout << S[i] << " " << count[i] << endl;
		}
	}
	
	return 0;
}


//以下模範解答
/*
#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> str;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        str[t]++;
    }
    for (auto it = str.begin(); it != str.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}
*/