#include <iostream>
using namespace std;
// void gun(){
//     return;
//     cout<<"Hello world"<<endl;
// }

// void fun(){
//     cout<<"Hello prakash"<<endl;
//     gun();
// }

// Concept of recursion
void fun(int n)
{
    if (n == 0)
        return;
    cout << "Hellow world" << endl;
    fun(n - 1);
}
int main()
{    int n;
    cout << "Enter the n to print number of times you want to print he..:";
    cin >> n;
    fun(n);

    return 0;
}