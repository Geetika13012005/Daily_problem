#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        if (s.front() == '1' && s.back() == '1')
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}