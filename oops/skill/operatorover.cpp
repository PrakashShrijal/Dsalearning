#include<iostream>
using namespace std;
class complexNumber
{
    public:
    int real;
    int imag;
    //  complexNumber add(complexNumber &c1){
    //     complexNumber c3;
    //     c3.imag = c1.imag + this->imag;
    //     c3.real = c1.real + this->real;
    //     return c3;
    //  }

    //operator overloading.
    complexNumber operator +(complexNumber &c1){
          complexNumber c3;
        c3.imag = c1.imag + this->imag;
        c3.real = c1.real + this->real;
        return c3;

    }
};
int main()
{
    complexNumber a1,a2;
    a1.imag = 10;
    a1.real = 12;
    a2.imag = 15;
    a2.real = 3;
      // general addition
    complexNumber  a5;
    a5.real = a1.real + a2.real;
    a5.imag = a1.imag + a2.imag;
     cout<<"real :"<<a5.real<<endl<<"imaginary :"<<a5.imag<<endl;
     //using memeber function
    //complexNumber a3 = a1.add(a2);


    // using operator overloading.
    complexNumber a3 = a1 + a2;
    complexNumber a4 = a1 + a2 + a3;  // precedence 
    cout<<"real :"<<a3.real<<endl<<"imaginary :"<<a3.imag<<endl;
     cout<<"real :"<<a4.real<<endl<<"imaginary :"<<a4.imag<<endl;


return 0;
} 