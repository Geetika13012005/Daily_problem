#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << ((b % 2) == (c % 2)) << " "
             << ((a % 2) == (c % 2)) << " "
             << ((a % 2) == (b % 2)) << "\n";
    }

    return 0;
}