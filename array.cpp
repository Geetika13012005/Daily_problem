#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++) {
            int greaterCnt = 0;
            int smallerCnt = 0;

            for (int j = i + 1; j < n; j++) {
                if (a[j] > a[i])
                    greaterCnt++;
                else if (a[j] < a[i])
                    smallerCnt++;
            }

            cout << max(greaterCnt, smallerCnt);

            if (i + 1 < n)
                cout << ' ';
        }

        cout << '\n';
    }

    return 0;
}