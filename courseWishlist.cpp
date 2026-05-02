#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;          
vector<int> b;          
vector<int> cnt;   
vector<int> ops;        
bool makeSpace(int lvl) {
    if (lvl == k + 1)
        return true;

    if (cnt[lvl] < a[lvl])
        return true;

    for (int i = 1; i <= n; i++) {

        if (b[i] == lvl) {

            if (!makeSpace(lvl + 1))
                return false;

            // now move this course upward
            cnt[lvl]--;
            b[i]++;
            cnt[lvl + 1]++;

            ops.push_back(i);

            return true;
        }
    }

    return false;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {

        cin >> n >> k;

        a.assign(k + 2, 0);
        b.assign(n + 1, 0);
        cnt.assign(k + 2, 0);

        for (int i = 1; i <= k; i++) {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++) {
            cin >> b[i];
            cnt[b[i]]++;
        }

        ops.clear();

        bool ok = true;

        for (int i = 1; i <= n; i++) {

            while (b[i] <= k) {

                if (!makeSpace(b[i] + 1)) {
                    ok = false;
                    break;
                }

                cnt[b[i]]--;

                b[i]++;

                cnt[b[i]]++;

                ops.push_back(i);
            }

            if (!ok)
                break;
        }

        if (!ok || ops.size() > 1000) {
            cout << -1 << '\n';
        }
        else {

            cout << ops.size() << '\n';

            for (int x : ops) {
                cout << x << " ";
            }

            cout << '\n';
        }
    }

    return 0;
}