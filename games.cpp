#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int home[30], away[30];
    
    for (int i = 0; i < n; i++)
        cin >> home[i] >> away[i];
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && home[i] == away[j])
                count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
