#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> input(n);
    for(int i = 0; i < n; i++){

        cin >> input[i];
    }

    

    unordered_map<string, int> mp;
    vector<string> result;

    // process all inputs
    for(int i = 0; i < n; i++){
        string s = input[i];

        if(mp[s] == 0){
            result.push_back("OK");
            mp[s] = 1;
        } else {
            result.push_back(s + to_string(mp[s]));
            mp[s]++;
        }
    }

    // print all outputs together
    for(auto &res : result){
        cout << res << "\n";
    }

    return 0;
}