#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    vector<int> freq(26, 0); 

  
    for (int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
    }

  
    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i] - 'a'] == 1) {
            cout << "First unique character is '" << s[i] << "' at index " << i << endl;
            return 0;
        }
    }

    cout << "No unique character found." << endl;

    return 0;
}
