#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int sum = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int expected = n * (n + 1) / 2;
    cout << expected - sum;

    return 0;
}
