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

        int cnt0 = 0, cntNeg = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) cnt0++;
            else if (x == -1) cntNeg++;
        }

        // Convert all zeros to ones
        int operations = cnt0;

        // If number of -1 is odd, fix parity
        if (cntNeg % 2 == 1) {
            operations += 2;
        }

        cout << operations << "\n";
    }
    return 0;
}
