#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t; 

    while (t--) {
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.rbegin(), a.rend()); 

        long long teams = 0, members = 0;
        for (long long skill : a) {
            members++;
            if (members * skill >= x) {
                teams++;
                members = 0;
            }
        }

        cout << teams << "\n";
    }

    return 0;
}
