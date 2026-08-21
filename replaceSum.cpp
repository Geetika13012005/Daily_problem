#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        // c[i] = maximum value that can eventually reach position i
        vector<long long> c(n);

        long long mxA = 0;
        long long mxB = 0;

        for (int i = n - 1; i >= 0; i--) {
            mxA = max(mxA, a[i]);
            mxB = max(mxB, b[i]);

            c[i] = max(mxA, mxB);
        }

        // Prefix sums of c
        vector<long long> pref(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + c[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;

            cout << pref[r] - pref[l - 1] << '\n';
        }
    }

    return 0;
}