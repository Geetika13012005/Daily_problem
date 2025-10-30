#include <iostream>
#include <string>
#include <set>
#include <cctype>   // for tolower()

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> letters;

    // Convert each character to lowercase and add to set
    for (char c : s) {
        letters.insert(tolower(c));
    }

    // Check if all 26 alphabets are present
    if (letters.size() == 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
