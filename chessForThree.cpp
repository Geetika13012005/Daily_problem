#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        if ((p1 + p2 + p3) & 1) {
            cout << -1 << '\n';
            continue;
        }

        int ans = -1;

        for (int x12 = 0; x12 <= 30; x12++) {
            for (int x13 = 0; x13 <= 30; x13++) {
                for (int x23 = 0; x23 <= 30; x23++) {

                    int d1 = x12 + x13;
                    int d2 = x12 + x23;
                    int d3 = x13 + x23;

                    int r1 = p1 - d1;
                    int r2 = p2 - d2;
                    int r3 = p3 - d3;

                    if (r1 < 0 || r2 < 0 || r3 < 0) continue;
                    if (r1 % 2 || r2 % 2 || r3 % 2) continue;

                    ans = max(ans, x12 + x13 + x23);
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}