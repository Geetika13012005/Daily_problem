#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long minSum = k * (k + 1) / 2;
        long long maxSum = k * (2 * n - k + 1) / 2;

        if (x >= minSum && x <= maxSum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}