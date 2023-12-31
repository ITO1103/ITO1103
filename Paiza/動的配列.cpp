#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < Q; i++) {
        int query;
        cin >> query;
        if (query == 0) {
            // push_back
            int x;
            cin >> x;
            arr.push_back(x);
        } else if (query == 1) {
            // pop_back
            arr.pop_back();
        } else {
            // print
            for (int j = 0; j < arr.size(); j++) {
                cout << arr[j];
                if (j == arr.size() - 1) {
                    cout << endl;
                } else {
                    cout << ' ';
                }
            }
        }
    }
}