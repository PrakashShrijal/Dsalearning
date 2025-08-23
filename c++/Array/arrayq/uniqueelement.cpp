#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 4, 5, 6, 7, 6, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        // Compare arr[i] with all elements of the array
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        // If the count is 1, print the element
        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}
