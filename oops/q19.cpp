#include <iostream>
#include <cmath> // For sqrt function
#include <stdexcept> // For std::runtime_error
using namespace std;

// User-defined function to compute square root
double my_sqrt(double number) {
    if (number < 0) {
        throw runtime_error("Error: Cannot compute the square root of a negative number.");
    }
    return sqrt(number); // Return the square root
}

int main() {
    double number;

    while (true) {
        cout << "Enter a non-negative number to compute its square root (or type 'exit' to quit): ";
        string input;
        cin >> input;

        // Check if the user wants to exit
        if (input == "exit") {
            break;
        }

        try {
            // Convert input to double
            number = stod(input);

            // Compute square root
            double result = my_sqrt(number);
            cout << "The square root of " << number << " is " << result << endl;
        } catch (const runtime_error& e) {
            // Handle the exception for negative input
            cout << e.what() << endl;
        } catch (const invalid_argument&) {
            // Handle invalid input (non-numeric)
            cout << "Error: Invalid input. Please enter a valid number." << endl;
        } catch (const out_of_range&) {
            // Handle out of range errors
            cout << "Error: Number is out of range." << endl;
        }
    }

    cout << "Program exited." << endl;
    return 0;
}