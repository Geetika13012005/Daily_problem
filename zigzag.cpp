#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n), p(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        // prefix max
        p[0] = a[0];
        for (int i = 1; i < n; ++i) p[i] = max(p[i-1], a[i]);

        const ll INF = (ll)9e18;
        auto compute = [&](int start)->ll {
            // start = 0 => valleys at indices 0,2,4,...
            // start = 1 => valleys at indices 1,3,5,...
            ll cost = 0;
            for (int i = start; i < n; i += 2) {
                ll left  = (i > 0 ? /*peak/neighbor*/ ( ( (i-1) % 2 != start ) ? p[i-1] : a[i-1] ) : INF);
                ll right = (i+1 < n ? ( ( (i+1) % 2 != start ) ? p[i+1] : a[i+1] ) : INF);
                // we used p[] for neighbors that are peaks; valleys keep original a[]
                ll limit = min(left, right);
                if (a[i] >= limit) cost += (a[i] - limit + 1);
            }
            return cost;
        };

        // Try both starts and take min
        cout << min(compute(0), compute(1)) << '\n';
    }
    return 0;
}
