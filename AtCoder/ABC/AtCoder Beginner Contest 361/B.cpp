#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e, f, g, h, i, j, k, l, tmp;
    cin >> a >> b >> c >> d >> e >> f;
    cin >> g >> h >> i >> j >> k >> l;

    if(a > d){
        tmp = a;
        a = d;
        d = tmp;
    }
    if(b > e){
        tmp = b;
        b = e;
        e = tmp;
    }
    if(c > f){
        tmp = c;
        c = f;
        f = tmp;
    }
    if(g > j){
        tmp = g;
        g = j;
        j = tmp;
    }
    if(h > k){
        tmp = h;
        h = k;
        k = tmp;
    }
    if(i > l){
        tmp = i;
        i = l;
        l = tmp;
    }

    if(d <= g || e <= h || f <= i || j <= a || k <= b || l <= c){
            cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}