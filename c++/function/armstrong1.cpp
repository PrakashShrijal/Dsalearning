#include <iostream>  // TC = O(d log d)
#include <cmath>
using namespace std;

int fastPow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

int armstrong(int n) {
    int power = 0, temp = n;
    while (temp) {
        temp /= 10;
        power++;
    }

    int result = 0;
    temp = n;
    while (temp) {
        int digit = temp % 10;

        // Option 1: safer
        result += fastPow(digit, power);

        // Option 2: shorter but floating-point based
        // result += (int)pow(digit, power);

        temp /= 10;
    }
    return result;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n == armstrong(n))

    cout<<"Number is Armstrong NUmber  " << armstrong(n);
    else cout<<"It is not a Armstong Number!";

  
return 0;
}
