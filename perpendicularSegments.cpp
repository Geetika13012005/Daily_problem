#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int X, Y, K;
        cin >> X >> Y >> K;

        int d = ceil(K / sqrt(2.0));

        cout << 0 << " " << 0 << " " << d << " " << d << "\n";
        cout << 0 << " " << d << " " << d << " " << 0 << "\n";
    }

    return 0;
}