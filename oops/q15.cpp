#include<iostream>
using namespace std;
class shape{
    protected :
    double dimension1;
    double dimension2;
    public:
    shape(double d1,double d2) : dimension1(d1), dimension2(d2){}

    virtual void display_Area() = 0;

};
class traingle :public shape{
    public:
    traingle(double base, double height) : shape(base, height){}
    void display_Area() override{
        double area =  0.5* dimension1*dimension2;
        cout<<"Area of the Triangle :"<<area<<endl;
    }
};

int main()
{
return 0;
} 