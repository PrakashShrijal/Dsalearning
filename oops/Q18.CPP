
// Write a class template to represent a generic vector. Include member functions to
// perform the following task:
// a. To Create a vector
// b. Sort the elements in ascending order
// c. Display the vector






#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

template <typename T>
class GenericVector {
private:
    std::vector<T> elements; // Vector to hold the elements

public:
    // Function to create a vector
    void createVector(int size) {
        elements.resize(size); // Resize the vector to the specified size
        std::cout << "Enter " << size << " elements:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cin >> elements[i]; // Input elements
        }
    }

    // Function to sort the elements in ascending order
    void sortVector() {
        std::sort(elements.begin(), elements.end()); // Sort the vector
    }

    // Function to display the vector
    void displayVector() const {
        std::cout << "Vector elements: ";
        for (const auto& element : elements) {
            std::cout << element << " "; // Display each element
        }
        std::cout << std::endl;
    }
};

int main() {
    GenericVector<int> intVector; // Create a GenericVector for integers
    int size;

    std::cout << "Enter the size of the vector: ";
    std::cin >> size;

    intVector.createVector(size); // Create the vector
    intVector.sortVector(); // Sort the vector
    intVector.displayVector(); // Display the sorted vector

    return 0;
}