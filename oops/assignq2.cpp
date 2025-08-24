/*Create a class binary, having a private data member of type string. Then you create some functions

i.) to input the string.

ii.) to check whether it is binary or not

iii.) to display the string one

iv.) to find ones complement and use the previously used display to print the one complement.

Call from main function using any example of your choice and write the output.

*/



#include <iostream>
#include <string>
using namespace std;

class Binary {
private:
    string binaryString; // Private data member to store the binary string

public: 
    // Function to input the binary string
    void inputString() {
        cout << "Enter a binary string: ";
        cin >> binaryString;
    }

    // Function to check whether the string is binary or not
    bool isBinary() {
        for (char c : binaryString) {   //for each loop is used here.
            if (c != '0' && c != '1') {
                return false; // If any character is not 0 or 1, return false
            }
        }
        return true; // All characters are binary
    }

    // Function to display the binary string
    void display() {
        cout << "Binary String: " << binaryString << endl;
    }

    // Function to find and display the one's complement
    void onesComplement() {
        string complement = binaryString; // Create a copy for the complement
        for (char &c : complement) {
            c = (c == '0') ? '1' : '0'; // Flip 0 to 1 and 1 to 0
        }
        cout << "One's Complement: " << complement << endl;
    }
};

int main() {
    Binary b; // Create an object of the Binary class

    // Input the binary string
    b.inputString();

    // Check if the string is binary
    if (b.isBinary()) {
        b.display(); // Display the binary string
        b.onesComplement(); // Display the one's complement
    } else {
        cout << "The string is not a binary string." << endl;
    }

    return 0;
}