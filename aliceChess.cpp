#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        string s;
        cin >> s;

        int cx = 0, cy = 0;
        bool ok = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'N') cy++;
            else if (s[i] == 'S') cy--;
            else if (s[i] == 'E') cx++;
            else if (s[i] == 'W') cx--;

            if (cx == x && cy == y) {
                ok = true;
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}