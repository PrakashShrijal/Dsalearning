#include<iostream>
using namespace std;
int power(int n, int m){
    if(m == 0){
        return 1;
    }
    return n*power(n,m-1);  // TC= O(n);
}

//lograthmic approach    
// int pow(int n, int m){
//     if(m == 1){             // .................  doesn't work for odd power.
//         return n;
//     }
//     int ans = pow(n,m/2);
//     return ans*ans;
// }


// lograthmic approach less call means less stack frames used 
int pow(int n, int m){
    if(m == 0){           
        return 1;
    }
    int ans = pow(n,m/2);
    if(m % 2 == 0){
        return ans*ans;
}else{
    return ans*ans*n;
}
}

int main()
{
    int a,b;
    cout<<"Enter the base first and then power :";
    cin>>a>>b;
   cout<< power(a,b)<<endl;
   cout<<pow(a,b);
return 0;
}