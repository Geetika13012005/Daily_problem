#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        int mx = 1;
        int current = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                current++;
            } else {
                current = 1;
            }

            mx = max(mx, current);
        }

        cout << mx + 1 << '\n';
    }

    return 0;
}