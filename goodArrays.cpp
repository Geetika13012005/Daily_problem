#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        long long sum = 0;
        int cnt1 = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sum += x;
            if (x == 1) cnt1++;
        }

        if (n > 1 && sum >= n + cnt1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}