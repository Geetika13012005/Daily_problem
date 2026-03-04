#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;   // number of test cases

    int k[400];
    long long x[400];

    // Step 1: Take all test cases first
    for(int i = 0; i < t; i++) {
        cin >> k[i] >> x[i];
    }

    // Step 2: Solve all test cases
    for(int i = 0; i < t; i++) {

        for(int j = 0; j < k[i]; j++) {
            x[i] = x[i] * 2;
        }

    }

    // Step 3: Print all answers at the end
    for(int i = 0; i < t; i++) {
        cout << x[i] << endl;
    }

    return 0;
}