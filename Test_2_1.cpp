#include <iostream>
#include <string>

using namespace std;

class display {
public:
    void displayMessage(string name) {
        cout << "\nHi " << name << "! Welcome to C++ class!" << endl;
    }
};
int main() {
    display myDisplay; 
    string fullName;
    cout << "Please enter your name:\n";
    getline(cin, fullName);
    myDisplay.displayMessage(fullName);
    return 0;
}
