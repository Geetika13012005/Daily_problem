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

        vector<int> p(n + 1), pos(n + 1);

          for (int i = 1; i <= n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        bool possible = true;

        for (int i = 1; i < n; i++) {
            if (pos[i + 1] < pos[i]) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
