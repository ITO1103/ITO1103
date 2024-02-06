#include <iostream>
using namespace std;
int main() {
    int h, w, a, b;
    cin >> h >> w >> a >> b;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            printf("(%9d, %9d)", a, b);
            if (j != w) {
                printf(" | ");
            } else {
                printf("\n");
            }
        }
        if (i != h) {
            for (int j = 0; j < 9 * 2 * w + 4 * w + 3 * (w - 1); j++) {
                printf("=");
            }
            printf("\n");
        }
    }
}