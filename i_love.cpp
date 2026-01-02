#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  
    int scores[n];
    
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    
    int amazing = 0;             
    int min_score = scores[0];   
    int max_score = scores[0];  
    
    for (int i = 1; i < n; i++) {
        if (scores[i] > max_score) {      
            amazing++;
            max_score = scores[i];
        } 
        else if (scores[i] < min_score) { 
            amazing++;
            min_score = scores[i];
        }
    }
    
    cout << amazing;
    return 0;
}
