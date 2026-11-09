
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<vector<int>> results;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());

        vector<int> ans;
        vector<int> extra;

        set<int> seen;

        for (int i = 0; i < n; i++) {

            if (seen.count(a[i]) == 0) {
                ans.push_back(a[i]);
                seen.insert(a[i]);
            }
            else {
                extra.push_back(a[i]);
            }
        }

        for (int i = 0; i < extra.size(); i++) {
            ans.push_back(extra[i]);
        }

        results.push_back(ans);
    }

    // Print all outputs after taking all inputs
    for (int i = 0; i < results.size(); i++) {

        for (int j = 0; j < results[i].size(); j++) {
            cout << results[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
