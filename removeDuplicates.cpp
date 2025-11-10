#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (nums.empty()) {
        cout << "Array is empty!" << endl;
        return 0;
    }

    int j = 0; 
    for (int i = 1; i < n; i++) {  
        if (nums[i] != nums[j]) {  
            j++;
            nums[j] = nums[i];     
        }
    }

    int k = j + 1;

    cout << "\nNumber of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
