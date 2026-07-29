#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        bool allZero = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != 0) allZero = false;
        }

        if (allZero) {
            cout << 0 << "\n";
            continue;
        }

        if (n % 2 == 0) {
            cout << 2 << "\n";
            cout << "1 " << n << "\n";
            cout << "1 " << n << "\n";
        } else {
            cout << 4 << "\n";
            cout << "1 2\n";
            cout << "1 2\n";
            cout << "2 " << n << "\n";
            cout << "2 " << n << "\n";
        }
    }

    return 0;
}