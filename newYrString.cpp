#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (s.find("2025") == string::npos) {
            cout << 0 << "\n";
            continue;
        }

        int ans = INT_MAX;

        string target = "2026";
        for (int i = 0; i + 3 < n; i++) {
            int cost = 0;
            for (int j = 0; j < 4; j++) {
                if (s[i + j] != target[j])
                    cost++;
            }
            ans = min(ans, cost);
        }
        vector<int> badPos;
        for (int i = 0; i + 3 < n; i++) {
            if (s.substr(i, 4) == "2025") {
                badPos.push_back(i);
            }
        }

        int m = badPos.size();
        for (int mask = 1; mask < (1 << n); mask++) {
            int changes = __builtin_popcount(mask);
            if (changes >= ans) continue;

            bool ok = true;
            for (int pos : badPos) {
                bool broken = false;
                for (int k = 0; k < 4; k++) {
                    if (mask & (1 << (pos + k))) {
                        broken = true;
                        break;
                    }
                }
                if (!broken) {
                    ok = false;
                    break;
                }
            }

            if (ok)
                ans = changes;
        }

        cout << ans << "\n";
    }
    return 0;
}
