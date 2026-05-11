#include <bits/stdc++.h>
using namespace std;

bool between(int x, int l, int r) {
    return x > l && x < r;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        
        if (a > b) swap(a, b);

      
        bool cInside = between(c, a, b);
        bool dInside = between(d, a, b);

        if (cInside != dInside)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}