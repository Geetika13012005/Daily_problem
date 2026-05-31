#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int p;
        cin >> p;
        p--; // convert to 0-based

        int x = a[p];

        // b[i] = a[i] xor x
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            b[i] = a[i] ^ x;

        int L = 0;

        // virtual b[-1] = 0
        int prev = 0;
        for (int i = 0; i <= p; i++) {
            if (b[i] != prev)
                L++;
            prev = b[i];
        }

        int R = 0;

        // virtual b[n] = 0
        prev = 0;
        for (int i = n - 1; i >= p; i--) {
            if (b[i] != prev)
                R++;
            prev = b[i];
        }
        cout << max(L, R) << '\n';
    }

    return 0;
}