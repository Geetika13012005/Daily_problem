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

        if (n % 2 == 1) {
            cout << -1 << '\n';
            continue;
        }

        // (n/2 - 1) times "33", then "66"
        for (int i = 0; i < n / 2 - 1; i++)
            cout << "33";
        cout << "66\n";
    }
    return 0;
}
