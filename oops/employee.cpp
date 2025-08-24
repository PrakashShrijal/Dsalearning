#include<iostream>
using namespace std;
// base class Employee
class Employee{
    public:
    int emp_id;
    float salary;
    Employee(int id, float sal){
        emp_id = id;
        salary =  sal;
    }
    void displayEmployee(){
        cout<<"Employee ID: "<<emp_id<<endl;
        cout<<"salarty : "<<salary<<endl;
    }
};
class programmer : public Employee{
    public:
    string language;
    // concept of Initializer list.
    
    programmer(int id, float sal,string lang) : Employee(id,sal){ 
        language = lang;
    }
    void displayprogrammer(){
        displayEmployee();
        cout<<"programmer Language : "<< language<<endl;
    }
};





int main()
{
    programmer p1(101,75000, "c++");
    p1.displayprogrammer();
return 0;
}