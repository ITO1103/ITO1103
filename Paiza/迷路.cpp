#include <iostream>
#include <vector>
using namespace std;
int main() {
    int H, W, r, c;
    cin >> H >> W >> r >> c;
    vector<string> arr(H);
    for (int i = 0; i < H; i++) {
        cin >> arr[i];
    }
    if (arr[r - 1][c - 1] == '#') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}