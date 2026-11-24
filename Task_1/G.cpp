#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    string grid[100];

    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    int r1, c1, r2, c2;
    int count = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            if (grid[i][j] == 'o') {
                if (count == 0) {
                    r1 = i;
                    c1 = j;
                }
                else {
                    r2 = i;
                    c2 = j;
                }

                count++;
            }
        }
    }

    cout << abs(r1 - r2) + abs(c1 - c2);

    return 0;
}