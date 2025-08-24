#include <iostream>
#include <cstring> // For strlen and strcpy
using namespace std;

class String {
private:
    char* str; // Pointer to hold the string
public:
    // Constructor to initialize the string
    String(const char* s = "") {
        str = new char[strlen(s) + 1]; // Allocate memory for the string
        strcpy(str, s); // Copy the string
    }

    // Copy constructor
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Destructor to free allocated memory
    ~String() {
        delete[] str;
    }

    // Overloading the == operator to compare two strings
    bool operator==(const String& other) const {
        return strcmp(str, other.str) == 0; // Compare the strings
    }

    // Overloading the + operator to concatenate two strings
    String operator+(const String& other) const {
        String result; // Create a new String object for the result
        result.str = new char[strlen(str) + strlen(other.str) + 1]; // Allocate memory for concatenated string
        strcpy(result.str, str); // Copy the first string
        strcat(result.str, other.str); // Concatenate the second string
        return result; // Return the concatenated string
    }

    // Function to display the string
    void display() const {
        cout << str << endl;
    }
};

int main() {
    String str1("Hello");
    String str2("World");
    String str3("Hello");

    // Display the strings
    cout << "String 1: ";
    str1.display();
    cout << "String 2: ";
    str2.display();
    cout << "String 3: ";
    str3.display();

    // Compare strings
    if (str1 == str3) {
        cout << "String 1 is equal to String 3." << endl;
    } else {
        cout << "String 1 is not equal to String 3." << endl;
    }

    // Concatenate strings
    String str4 = str1 + str2;
    cout << "Concatenated String: ";
    str4.display();

    return 0;
}
