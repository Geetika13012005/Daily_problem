#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

const int64 LIM = 1000000000000000000LL;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int64 n;
        cin >> n;

        int64 lcm = 1;
        int ans = 1;

        for (int i = 2; ; i++) {
            int64 g = gcd(lcm, (int64)i);

            if (lcm / g > LIM / i)
                break;

            lcm = (lcm / g) * i;

            if (n % lcm == 0)
                ans = i;
            else
                break;
        }

        cout << ans << "\n";
    }
}