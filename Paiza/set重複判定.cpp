#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> nums;

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (i > 0) {
            if (nums.count(A)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
        nums.insert(A);
    }
}