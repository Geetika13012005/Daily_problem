#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long X;
        cin >> n >> X;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;
        
        // Sort in descending order for maximum bonus
        sort(a.begin(), a.end(), greater<long long>());
        
        long long S = 0, bonus = 0;
        long long curLevel = 0;
        
        for (long long p : a) {
            long long newLevel = (S + p) / X;
            if (newLevel > curLevel)
                bonus += p;
            S += p;
            curLevel = newLevel;
        }
        
        cout << bonus << "\n";
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << "\n";
    }
    return 0;
}

