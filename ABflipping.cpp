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

        int firstA = -1;
        int lastB = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'A' && firstA == -1) {
                firstA = i;
            }

            if (s[i] == 'B') {
                lastB = i;
            }
        }

        if (firstA == -1 || lastB == -1 || firstA > lastB) {
            cout << 0 << '\n';
        } else {
            cout << lastB - firstA << '\n';
        }
    }

    return 0;
}