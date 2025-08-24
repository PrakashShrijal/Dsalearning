#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFile(const string& filename) {
    ifstream inputFile(filename); // Open the file for reading

    if (!inputFile) {
        cerr << "Error: Could not open the file " << filename << " for reading." << endl;
        return;
    }

    string line;
    cout << "Contents of the file " << filename << ":" << endl;
    while (getline(inputFile, line)) {
        cout << line << endl; // Print each line of the file
    }

    inputFile.close(); // Close the file
}

void writeFile(const string& filename) {
    ofstream outputFile(filename, ios::app); // Open the file for appending

    if (!outputFile) {
        cerr << "Error: Could not open the file " << filename << " for writing." << endl;
        return;
    }

    cout << "Enter the content you want to append to the file (type 'exit' to stop):" << endl;
    string content;
    while (true) {
        getline(cin, content);
        if (content == "exit") {
            break; // Exit the loop if the user types 'exit'
        }
        outputFile << content << endl; // Write the content to the file
    }

    outputFile.close(); // Close the file
}

int main() {
    string filename;

    cout << "Enter the filename to read and write: ";
    cin >> filename;
    cin.ignore(); // Ignore the newline character left in the input buffer

    // Read the content of the file
    readFile(filename);

    // Write new content to the file
    writeFile(filename);

    cout << "Operation completed." << endl;
    return 0;
}