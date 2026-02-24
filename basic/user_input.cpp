#include <iostream>
#include <iostream>
using namespace std;
using namespace std;

int main() {
    string name;
    int age;

    // Asking for user input
    cout << "Enter your name: ";
    getline(cin, name);  // Takes full name input

    cout << "Enter your age: ";
    cin >> age;

    // Displaying the input
    cout << "\nHello, " << name << "! You are " << age << " years old.\n";

    return 0;
}
