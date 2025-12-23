#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;

        if (n.size() == 1) {
            cout << 0 << '\n';
        } else {
            cout << n.size() - 1 << '\n';
        }
    }
    return 0;
}
