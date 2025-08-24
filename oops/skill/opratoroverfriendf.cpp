#include<iostream>
using namespace std;
class complexNumber
{
    public:
    int real;
    int imaginary;

    friend complexNumber operator +(complexNumber &a1, complexNumber &a2);  //object is passed in arguments

     //operator overloading.
    // complexNumber operator +(complexNumber &c1){
    //       complexNumber c3;
    //     c3.imag = c1.imag + this->imag;
    //     c3.real = c1.real + this->real;
    //     return c3;

    
};
complexNumber operator + (complexNumber &a1, complexNumber &a2){
complexNumber c3;
c3.imaginary = a1.imaginary + a2.imaginary;
c3.real = a1.real + a2.real;
return c3;
}
 
 


int main()
{
    complexNumber a1,a2;
    a1.imaginary = 10;
    a1.real = 12;
    a2.imaginary = 15;
    a2.real = 3;

     // using operator overloading.
    // complexNumber a3 = a1 + a2;
    // complexNumber a4 = a1 + a2 + a3;  // precedence 
    // cout<<"real :"<<a3.real<<endl<<"imaginary :"<<a3.imag<<endl;
    //  cout<<"real :"<<a4.real<<endl<<"imaginary :"<<a4.imag<<endl;

    complexNumber c3 = a1 + a2;
    
    cout<<"real :"<<c3.real<<endl<<"imaginary :"<<c3.imaginary<<endl;
    

return 0;
} 