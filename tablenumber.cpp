#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        vector<int> a(n);
        int row = 0, col = 0, both = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= h) row++;
            if (a[i] <= l) col++;
            if (a[i] <= min(h, l)) both++;
        }

        int usable = row + col - both;
        int ans = min({row, col, usable / 2});

        cout << ans << "\n";
    }
}
