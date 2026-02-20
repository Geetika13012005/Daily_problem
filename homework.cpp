#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string a;
        cin >> a;

        int m;
        cin >> m;

        string b, c;
        cin >> b >> c;

        for(int i = 0; i < m; i++){
            if(c[i] == 'V')
                a = b[i] + a;   // add to front
            else
                a = a + b[i];   // add to end
        }

        cout << a << endl;
    }
}