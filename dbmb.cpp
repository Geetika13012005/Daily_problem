#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
        }

        if (sum > s) {
            cout << "NO\n";
        } 
        else if (x == 0) {
            cout << (sum == s ? "YES\n" : "NO\n");
        } 
        else {
            cout << ((s - sum) % x == 0 ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
