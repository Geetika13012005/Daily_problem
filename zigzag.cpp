#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        auto cost = [&](int start) {
            long long ans = 0;
            for (int i = start; i < n; i += 2) {
                long long left = (i > 0 ? a[i - 1] : LLONG_MAX);
                long long right = (i + 1 < n ? a[i + 1] : LLONG_MAX);
                long long limit = min(left, right);
                if (a[i] >= limit) ans += (a[i] - limit + 1);
            }
            return ans;
        };

        long long answer;
        if (n % 2 == 1) {
           
            answer = cost(1);
        } else {
    
            answer = min(cost(0), cost(1));
        }

        cout << answer << "\n";
    }

    return 0;
}
