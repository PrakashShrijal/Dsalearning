#include <iostream>
#include <conio.h>
using namespace std;
class complexNumber
{
    float real;
    float imag;

public:
    void setvalue(float r, float i)
    {
        real = r;
        imag = i;
    }

    friend complexNumber addComlex(complexNumber c1, complexNumber c2);
    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
complexNumber addComlex(complexNumber c1, complexNumber c2)
{
    complexNumber temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    complexNumber c1, c2, c3;
    c1.setvalue(3.5, (2.5));
    c2.setvalue(1.6, (4.1));

    c3 = addComlex(c1, c2);
    cout << "First complex number :";
    c1.print();
    cout << endl;
    cout<<"Second complex numbers :";
    c2.print();
    cout << endl;
    cout<<"Sum of comlex numbers :";
    c3.print();
    return 0;
}