#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int64> a(n + 1), dp(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        dp[1] = a[1];

        for (int i = 2; i < n; i++) {
            dp[i] = min(a[i], a[i] - dp[i - 1]);
        }

        cout << a[n] - dp[n - 1] << '\n';
    }

    return 0;
}