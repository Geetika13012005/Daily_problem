#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        int top = -1, bottom = -1, left = -1, right = -1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '#') {

                    if (top == -1) top = i;
                    bottom = i;

                    if (left == -1 || j < left)
                        left = j;

                    if (right == -1 || j > right)
                        right = j;
                }
            }
        }

        int centerRow = (top + bottom) / 2;
        int centerCol = (left + right) / 2;

        cout << centerRow + 1 << " " << centerCol + 1 << '\n';
    }

    return 0;
}