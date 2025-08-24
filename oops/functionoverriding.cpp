/* function Overriding ( use of virtual function and concept of abstract class in connection to
virtual function)*/

#include<iostream>
#include <vector>
#include<string>
using namespace std;
class vehicle{
    public:
    int tyresize;
    int engineSize;
    int lights;
    string companyName;
   virtual void show(){  // use without virtual and by puttinng virtual
        cout<<"Vehicle ka show"<<endl;
    }
};
class Bike : public vehicle
{      //derived class, child class
public:
int handleSize;
void show(){
    cout<<"Bike ka show\n"<<endl;
}

};
class c : public Bike{
    public:
    void show(){
        vehicle::show();
        Bike::show();
    }
};



int main()
{
    vehicle *a;
    a = new Bike;
    a->show(); // output (Vehicle ka show) complie time //Bike ka show( runtime )
    a = new vehicle;
    a->show();  //(Vehicle ka show) as output 
    cout<<endl;
    a = new c;
    a->show();
return 0;
}