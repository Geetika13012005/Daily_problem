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

        set<long long> s;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            s.insert(x);
        }

        long long k = s.size();

        // Find smallest x >= k that already exists
        long long ans = k;
        while (s.find(ans) == s.end()) {
            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
