#include <iostream>
#include <string>
using namespace std;

bool isLucky(long long n) {
    if (n == 0) return false;
    while (n > 0) {
        int d = n % 10;
        if (d != 4 && d != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    string n;
    cin >> n;

    int count = 0;
    for (char c : n)
        if (c == '4' || c == '7')
            count++;

    if (isLucky(count))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
