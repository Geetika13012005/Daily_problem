#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int remainder = n % 3;
        if(remainder == 0)
            cout << 0 << "\n";
        else
            cout << 3 - remainder << "\n";
    }
    return 0;
}