// print from 1 to n using single parameter.
#include <iostream>
using namespace std;
void dispaly(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    dispaly(n - 1);    // call
    cout << n << endl; // work
}

int main()
{
    cout << "Enter the value of n :";
    int n;
    cin >> n;
    dispaly(n);
    return 0;
}