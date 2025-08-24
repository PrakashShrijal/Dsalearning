#include <iostream>
#include <cstring> // For strlen and strcpy
using namespace std;

class String {
private:
    char* bin; // Pointer to hold the binary number as a string

public:
    // Constructor to initialize the binary number  
    String(const char* b = "") {
        bin = new char[strlen(b) + 1]; // Allocate memory for the binary string
        strcpy(bin, b); // Copy the binary string
    }

    // Copy constructor
    String(const String& other) {
        bin = new char[strlen(other.bin) + 1];
        strcpy(bin, other.bin);
    }

    // Destructor to free allocated memory
    ~String() {
        delete[] bin;
    }

    // Overloading the == operator to compare two binary numbers
    bool operator==(const String& other) const {
        return strcmp(bin, other.bin) == 0; // Compare the binary strings
    }

    // Overloading the + operator to concatenate two binary numbers
    String operator+(const String& other) const {
        String result; // Create a new Binary object for the result
        result.bin = new char[strlen(bin) + strlen(other.bin) + 1]; // Allocate memory for concatenated binary string
        strcpy(result.bin, bin); // Copy the first binary string
        strcat(result.bin, other.bin); // Concatenate the second binary string
        return result; // Return the concatenated binary string
    }

    // Function to display the binary number
    void display() const {
        cout << bin << endl;
    }
};

int main() {
    String bin1("1010"); // Binary number 1
    String bin2("1100"); // Binary number 2
    String bin3("1010"); // Another binary number for comparison

    // Display the binary numbers
    cout << "Binary 1: ";
    bin1.display();
    cout << "Binary 2: ";
    bin2.display();
    cout << "Binary 3: ";
    bin3.display();

    // Compare binary numbers
    if (bin1 == bin3) {
        cout << "Binary 1 is equal to Binary 3." << endl;
    } else {
        cout << "Binary 1 is not equal to Binary 3." << endl;
    }

    // Concatenate binary numbers
    String bin4 = bin1 + bin2;
    cout << "Concatenated Binary: ";
    bin4.display();

    return 0;
} 