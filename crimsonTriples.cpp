#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<ll> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<int> dp(n + 2, 0);
        vector<ll> val(n + 2, 0);

        // Last element
        val[n] = a[n];
        dp[n] = (a[n] > 0);

        // Process from right to left
        for (int i = n - 1; i >= 1; i--) {

            // Option 1: Don't operate
            int cnt1 = dp[i + 1] + (a[i] > 0);
            ll v1 = a[i];

            // Option 2: Operate
            ll newValue = a[i] + val[i + 1];
            int cnt2 = dp[i + 1] + (newValue > 0);

            if (cnt2 > cnt1) {
                dp[i] = cnt2;
                val[i] = newValue;
            } else {
                dp[i] = cnt1;
                val[i] = v1;
            }
        }

        cout << dp[1] << "\n";
    }
    return 0;
}