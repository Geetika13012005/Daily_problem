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

        long long capacity = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            capacity += (x - 1);
        }

        if (capacity >= (n + 1) / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}