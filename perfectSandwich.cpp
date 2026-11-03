
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> ans;

    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a <= b) {
            ans.push_back(-1);
        }
        else {
            ans.push_back(min(b, a - b));
        }
    }

    // Print all answers after taking all inputs
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
