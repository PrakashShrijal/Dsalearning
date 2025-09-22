#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int l , int r, int key){
    if( l> r) return -1;
    if (arr[l] == key) return l;
    return linearSearch(arr, l+1, r, key);
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

pos = linearSearch(arr, 0, n-1, key);

if(pos == -1) cout<<"Elemrnt is not found !";
else cout<<"Element is found at  idx :"<<pos;
return 0;

return 0;
}