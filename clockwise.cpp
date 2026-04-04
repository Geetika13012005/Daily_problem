#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (a[i] <= 2LL * i) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}