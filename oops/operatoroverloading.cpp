//operatorOverloading
#include<iostream>
#include<string>
using namespace std;
class complexNumber{
    public:
    int imaginary;
    int real;

    complexNumber operator +(complexNumber &c1){  //opertaor overloading.
        complexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this->real;
        return c3;
    }
};
int main()
{
    complexNumber a1, a2;
    a1.imaginary = 10;
    a1.real  = 5;
    a2.imaginary = 20;
    a2.real = 12;

    complexNumber a3 = a1 + a2;
    complexNumber a4 = a1 + a3;
    cout<<"real: "<<a3.real<<" "<<"imaginary :"<<a3.imaginary<<endl;
    cout<<"real :"<<a4.real<<" "<<"imaginary :"<<a4.imaginary<<endl;
return 0;
}