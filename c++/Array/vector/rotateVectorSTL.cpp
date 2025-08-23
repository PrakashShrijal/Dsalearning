#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Rotate to move the first element (10) to the back of the vector
    std::rotate(vec.begin(), vec.begin() + 1, vec.end());

    // Print updated vector
    for (int num : vec) {
        std::cout << num << " ";
    }

    return 0;
}
