#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<pair<long long, int>> a(n);
        vector<long long> b(n), ans(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        // Sort forecast temperatures while keeping original indices
        sort(a.begin(), a.end());

        // Sort actual temperatures
        sort(b.begin(), b.end());

        // Match sorted elements
        for (int i = 0; i < n; i++) {
            ans[a[i].second] = b[i];
        }

        // Print answer in original day order
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}