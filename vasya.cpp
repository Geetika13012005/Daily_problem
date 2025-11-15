
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
        long long R0, X;
        int D, n;
        cin >> R0 >> X >> D >> n;

        string s;
        cin >> s;   

        long long R = R0;
        int ans = 0;

        for (char c : s) {
            if (c == '1') {
                
                ans++;
                R = max(0LL, R - D);
            } 
            else {  
             
                if (R < X) {
                    ans++;
                    R = max(0LL, R - D);
                }
                
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
