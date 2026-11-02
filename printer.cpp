
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<vector<int>> results;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        stack<int> st;
        vector<int> printed(n + 1, 0);

        for (int i = 0; i < n; i++) {

            int doc = i + 1;

            if (s[i] == '1') {
                st.push(doc);
            }
            else if (s[i] == '2') {

                if (!st.empty()) {
                    int x = st.top();
                    st.pop();
                    printed[x] = 1;
                }
                else {
                    printed[doc] = 1;
                }
            }
            else if (s[i] == '3') {
                printed[doc] = 1;
            }
        }

        vector<int> ans;

        for (int i = 1; i <= n; i++) {
            if (printed[i] == 0) {
                ans.push_back(i);
            }
        }

        results.push_back(ans);
    }

    // Print all test case answers
    for (int i = 0; i < results.size(); i++) {

        cout << results[i].size() << "\n";

        for (int j = 0; j < results[i].size(); j++) {
            cout << results[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}
