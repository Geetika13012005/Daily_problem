#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        // -------- MIN --------
        int min_ones = 0;

        for (int i = 0; i < n; ) {
            if (s[i] == '1') {
                int j = i;
                while (j < n && s[j] == '1') {
                    j++;
                }

                int len = j - i;
                min_ones += (len + 1) / 2;

                i = j;
            } else {
                i++;
            }
        }

        // -------- MAX --------
        int first = -1, last = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (first == -1) first = i;
                last = i;
            }
        }

        int max_ones = 0;
        if (first != -1) {
            max_ones = last - first + 1;
        }

        cout << min_ones << " " << max_ones << "\n";
    }

    return 0;
}