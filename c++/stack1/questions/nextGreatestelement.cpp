#include<bits/stdc++.h>
using namespace std;

// Function to find the next greatest element
vector<int> nextGreatestelement(int arr[], int size) {
    vector<int> nge(size, -1); // Initialize all elements to -1

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                nge[i] = arr[j]; // Assign the next greater element
                break; // Once we find the first greater element, break the loop
            }
        }
    }

    return nge;
}

int main() {
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
    vector<int> result = nextGreatestelement(arr, 8);

    // Printing the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
