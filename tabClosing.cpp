#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        long long k = a / b;     // Maximum tabs that can have length b

        if (a == b || n <= k) {
            cout << 1 << "\n";   // Only one move needed
        } else {
            cout << 2 << "\n";   // Two moves needed
        }
    }
    return 0;
}
