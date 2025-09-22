#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    if(n == 0) return -1;

    if (arr[0] == key) return 0;
    int res = linearSearch(arr + 1, n - 1, key);
    if(res == -1) return -1;
    else return res + 1;
}

int main()
{

    int arr[10], n, key, i, pos;
cout<<"Enter the size of array :";
cin>>n;

cout<<"Enter the element in the array :";
for(i = 0; i < n; i++){
    cin>>arr[i];
}

cout<<"Enter the key :";
cin>>key;

pos = linearSearch(arr, n, key);

if(pos == -1) cout<<"Elemrnt is not found !";
else cout<<"Element is found at  idx :"<<pos;
return 0;
}