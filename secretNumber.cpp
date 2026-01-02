#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    // Precompute powers of 10 up to 10^18
    vector<long long> power10(19);
    power10[0] = 1;
    for (int i = 1; i <= 18; i++) {
        power10[i] = power10[i - 1] * 10;
    }

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> answers;

        // Try all k = 1 to 18
        for (int k = 1; k <= 18; k++) {
            long long denom = 1 + power10[k];

            // If denom is bigger than n, x would be < 1, so stop
            if (denom > n) break;

            // Check if denom divides n
            if (n % denom == 0) {
                long long x = n / denom;
                if (x > 0) answers.push_back(x);
            }
        }

        // Print the result
        if (answers.empty()) {
            cout << 0 << "\n";
        } else {
            sort(answers.begin(), answers.end());
            cout << answers.size() << "\n";
            for (long long x : answers) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
