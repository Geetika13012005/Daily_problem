#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll a, b, m;
        cin >> a >> b >> m;

        cout << (m / a) + (m / b) + 2 << '\n';
    }

    return 0;
}