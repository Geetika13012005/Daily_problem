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

        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int cnt1 = 0, cnt2 = 0;

        for (auto &p : freq) {
            if (p.second == 1) cnt1++;
            else cnt2++;
        }

        int ans = 0;

        // from freq = 1
        ans += 2 * ((cnt1 + 1) / 2);

        // at least one from freq >= 2
        ans += cnt2;

        // full colors from freq >= 2
        ans += max(0, cnt2 - (cnt1 % 2));

        cout << ans << "\n";
    }
}