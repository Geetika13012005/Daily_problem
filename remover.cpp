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

        // Count number of runs
        int runs = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                runs++;
        }

        if (runs == 1) {
            // 0000 or 1111
            cout << 1 << '\n';
        }
        else if (runs == 2) {
            // 000111, 111000, etc.
            cout << 2 << '\n';
        }
        else {
            // 3 or more runs -> can reduce to 1
            cout << 1 << '\n';
        }
    }

    return 0;
}