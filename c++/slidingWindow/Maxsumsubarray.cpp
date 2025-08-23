#include<bits/stdc++.h>
using namespace std;
int main()
{ // brute force algo............
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    int k =3; 
    int maxSum = INT_MIN;
    int maxIdx = -1;
    for(int i=0; i<=n-k; i++){  // (n-k) windows 9-3 = 6 windows, no. oper. = n-k+1
        int sum = 0;
        for(int j =i ; j<i+k;j++){ // k times
            sum  += arr[j];
        }
       if(maxSum <sum){
        maxSum = sum;
        maxIdx = i;
       }
    }

    // tno = (n-k+1)*k
    // timeComplexity = O(k*n)
    cout <<maxSum<<endl;
    cout<<maxIdx;
return 0;
}