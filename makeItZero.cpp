#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // We don't actually need the values.
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // If already all zero, no operation is needed.
        bool allZero = true;
        for (int x : a) {
            if (x != 0) {
                allZero = false;
                break;
            }
        }

        if (allZero) {
            cout << 0 << "\n";
            continue;
        }

        if (n % 2 == 0) {
            // 6 operations
            cout << 6 << "\n";
            cout << 1 << " " << 2 << "\n";
            cout << 3 << " " << 4 << "\n";

            if (n > 4)
                cout << 5 << " " << n << "\n";
            else
                cout << 3 << " " << 4 << "\n";

            cout << 1 << " " << 3 << "\n";

            if (n > 4)
                cout << 4 << " " << n << "\n";
            else
                cout << 2 << " " << 4 << "\n";

            cout << 1 << " " << n << "\n";
        } else {
            // First solve first n-1 elements (even length),
            // then use two more operations.
            cout << 8 << "\n";
            cout << 1 << " " << 2 << "\n";
            cout << 3 << " " << 4 << "\n";

            if (n - 1 > 4)
                cout << 5 << " " << n - 1 << "\n";
            else
                cout << 3 << " " << 4 << "\n";

            cout << 1 << " " << 3 << "\n";

            if (n - 1 > 4)
                cout << 4 << " " << n - 1 << "\n";
            else
                cout << 2 << " " << 4 << "\n";

            cout << 2 << " " << n << "\n";
            cout << 1 << " " << n << "\n";
        }
    }

    return 0;
}