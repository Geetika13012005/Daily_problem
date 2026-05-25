#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> ans;

        // Numbers >= k first
        for (int i = n; i >= k; i--) {
            ans.push_back(i);
        }

        // Middle numbers
        for (int i = m + 1; i < k; i++) {
            ans.push_back(i);
        }

        // Numbers <= m at the end
        for (int i = 1; i <= m; i++) {
            ans.push_back(i);
        }

        for (int x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}