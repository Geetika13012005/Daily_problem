#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        long long n, m;
        cin >> n >> m;

        long long a[100005];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort in decreasing order
        sort(a, a + n, greater<long long>());

        long long answer = 0;

        long long limit = min(n, m);

        for(int i = 0; i < limit; i++) {
            answer += a[i] * (m - i);
        }

        cout << answer << endl;
    }

    return 0;
}