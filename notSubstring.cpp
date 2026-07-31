#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int n = s.size();

        string a = "";
        for (int i = 0; i < n; i++)
            a += "()";

        string b(n, '(');
        b += string(n, ')');

        if (a.find(s) == string::npos) {
            cout << "YES\n";
            cout << a << "\n";
        } else if (b.find(s) == string::npos) {
            cout << "YES\n";
            cout << b << "\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}