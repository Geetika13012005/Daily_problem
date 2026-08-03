#include <bits/stdc++.h>
using namespace std;

using int64 = long long;
using i128 = __int128_t;

const int64 LIM = 1000000000000000000LL;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int64 n;
        cin >> n;

        int ans = 1;

        for (int l = 1; l <= 2500; l++) {
            i128 curLcm = 1;

            for (int r = l; r <= l + 42; r++) {
                int64 g = std::gcd((int64)curLcm, (int64)r);
                curLcm = curLcm / g * r;

                if (curLcm > LIM) break;

                if (n % (int64)curLcm == 0)
                    ans = max(ans, r - l + 1);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}