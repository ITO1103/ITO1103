#include<bits/stdc++.h>
using namespace std;

int main(){
	int H,W,A,B;
	cin >> H >> W >> A >> B;
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cout << "(" << setw(9) << A << ", " << setw(9) << B << ")";
			if(j<W-1){
				cout << " | ";
			}
		}
		cout << endl;
		if(i<H-1){
			for(int k=0;k<(9*2*W+4*W+3*(W-1));k++){
				cout << "=";
			}
			cout << endl;
		}
		// for(int k=0;k<(9*2*W+4*W+3*(W-1));k++){
		// 	cout << "=";
		// }
		// cout << endl;
	}
}
