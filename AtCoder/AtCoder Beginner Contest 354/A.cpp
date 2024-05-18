#include <bits/stdc++.h>
using namespace std;

int main(){
    int H;
    int grow = 0;
    int count = 1;
    cin >> H;
    for(int i=0;i<H;i++){
        grow += pow(2,i);
        if(grow <= H){
            
            count++;
        }else{
            break;
        }
        
    }
    cout << count << endl;
}