#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long c, k;
        cin >> n >> c >> k;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            if (a[i] <= c) {
                c += a[i];
            } else {
                break;
            }
        }

        cout << c << "\n";
    }
}