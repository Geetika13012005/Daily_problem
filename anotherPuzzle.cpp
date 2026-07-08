#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        const int INF = 1e9;

        // Case 1: Without reordering
        int cost1 = 0;
        bool ok1 = true;

        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                ok1 = false;
                break;
            }
            cost1 += (a[i] - b[i]);
        }

        // Case 2: With one reordering
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int cost2 = c;
        bool ok2 = true;

        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                ok2 = false;
                break;
            }
            cost2 += (a[i] - b[i]);
        }

        if (!ok1 && !ok2)
            cout << -1 << endl;
        else if (ok1 && ok2)
            cout << min(cost1, cost2) << endl;
        else if (ok1)
            cout << cost1 << endl;
        else
            cout << cost2 << endl;
    }

    return 0;
}