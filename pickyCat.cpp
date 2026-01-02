
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int a1_abs = abs(a[0]);
        int less = 0, greater = 0;

        for (int i = 1; i < n; i++) {
            if (abs(a[i]) < a1_abs) less++;
            if (abs(a[i]) > a1_abs) greater++;
        }

        int median_pos = (n + 1) / 2; // 1-based median position

        // Correct condition:
        if (less <= median_pos - 1 && greater <= n - median_pos) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
