#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    unordered_set<int> seen;
    vector<int> result;

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(nums[i]) == seen.end()) {
            seen.insert(nums[i]);
            result.push_back(nums[i]);
        }
    }

    reverse(result.begin(), result.end());

    cout << result.size() << "\n";
    for (int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}
