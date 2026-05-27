#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        // Minimum operations
        int ans = (n - 2) / (k - 1) + 1;

        // Special case when n = 1
        if (n == 1)
            ans = 0;

        cout << ans << endl;
    }

    return 0;
}