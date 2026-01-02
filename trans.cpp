#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // Reverse string s
    reverse(s.begin(), s.end());

    // Check if reversed s equals t
    if (s == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
