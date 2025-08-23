#include<bits/stdc++.h>
using namespace std;

std::array<int, 8> nextGreatestelement(int arr[], int size) {
    std::array<int, 8> nge;
    for (int i = 0; i < size; i++) {
        nge[i] = -1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                nge[i] = arr[j];
                break;
            }
        }
    }
    return nge;
}
int* nextGreatestelement1(int arr[], int size) {
    int* nge = new int[size];
    for (int i = 0; i < size; i++) {
        nge[i] = -1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                nge[i] = arr[j];
                break;
            }
        }
    }
    return nge;
}


int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    std::array<int, 8>result = nextGreatestelement(arr,8);
for (int  i = 0; i < result.size(); i++)
{
    cout<<result[i]<<" ";
}
cout<<endl;
int* result1 = nextGreatestelement1(arr, 8);  // Store the result in a pointer

    // Print the result
    for (int i = 0; i < 8; i++) {
        cout << result1[i] << " ";
    }
    cout << endl;

    delete[] result1;  // Free the dynamically allocated memory
return 0;
}