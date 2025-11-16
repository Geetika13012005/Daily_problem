#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> st;
    int left = 0, maxLen = 0;
    int startIndex = 0; 

    for (int right = 0; right < s.size(); right++) {
        while (st.count(s[right])) {  
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);

        int currentLen = right - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
            startIndex = left;  
        }
    }

    cout <<" " << maxLen << endl;
    
    

    return 0;
}
