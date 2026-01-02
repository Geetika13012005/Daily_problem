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
        string s;
        cin >> s;

        char last = s[n - 1];
        int ans = 0;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] != last) {
                ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
