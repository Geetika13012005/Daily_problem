#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;

        int x, y;
        cin >> x >> y;

        int p = (x + y) % 2;
        bool caught = false;

        for (int i = 0; i < k; i++) {
            int xi, yi;
            cin >> xi >> yi;
            if ((xi + yi) % 2 == p)
                caught = true;
        }

        cout << (caught ? "NO" : "YES") << '\n';
    }

    return 0;
}