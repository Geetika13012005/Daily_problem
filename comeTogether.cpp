#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll xa, ya;
        ll xb, yb;
        ll xc, yc;

        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xc >> yc;

        ll common = 0;

        // X-coordinate
        ll dxB = xb - xa;
        ll dxC = xc - xa;

        if ((dxB > 0 && dxC > 0) || (dxB < 0 && dxC < 0)) {
            common += min(abs(dxB), abs(dxC));
        }

        // Y-coordinate
        ll dyB = yb - ya;
        ll dyC = yc - ya;

        if ((dyB > 0 && dyC > 0) || (dyB < 0 && dyC < 0)) {
            common += min(abs(dyB), abs(dyC));
        }

        // A itself is also visited by both.
        cout << common + 1 << '\n';
    }

    return 0;
}