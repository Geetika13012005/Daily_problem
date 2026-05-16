#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string v = "aeiou";

    while (t--) {
        int n;
        cin >> n;

        int base = n / 5;
        int extra = n % 5;

        string ans = "";

        for (int i = 0; i < 5; i++) {
            int cnt = base + (i < extra);

            while (cnt--) {
                ans += v[i];
            }
        }

        cout << ans << '\n';
    }
    return 0;
}