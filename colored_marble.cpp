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

        vector<int> a(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        int cnt1 = 0, cnt2 = 0;

        for (auto &p : freq) {
            if (p.second == 1) cnt1++;
            else cnt2++;
        }

        int ans = cnt2 + 2 * ((cnt1 + 1) / 2);

        cout << ans << "\n";
    }

    return 0;
}