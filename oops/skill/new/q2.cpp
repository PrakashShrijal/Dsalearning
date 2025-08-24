/* Q4. Create a class ‘Employee’ with following data members :
Ä NameÁ
Ä Employee IDÁ
Ä Salary
Class should have following member functions:
Create 5 objects of Employee and write functions to calculate
Ä averageWage() : To return the average salary of all employeesÁ
Ä maxSalary() : To return the employee whose salary is maximum
Ä Display() : To display the characteristics of each employee */
#include<bits/stdc++.h>
using namespace std;
class Employee{
    string name;
    int employeeID;
    int salary;
public :
    Employee(string name,int employeeID,int salary ){
        this->name = name;
        this->employeeID = employeeID;
        this->salary = salary;
    }
    // int averagewage(){

    // }

    // int maxSalary(){

    // }

    void display(){
        cout<<"Name of the Employee :"<<name<<endl;
        cout<<"Employee ID :"<<employeeID<<endl;
        cout<<"Salary of the Employee :"<<salary<<endl;
        cout<<"..............................."<<endl;
    }


};
int main()
{
    Employee e1= Employee("koo",234,12000);
    Employee e2= Employee("hung",235,14000);
    Employee e3= Employee("yesi",236,13000);
    Employee e4= Employee("lei",237,12500);
    Employee e5= Employee("chi",238,12060);
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();

return 0;
}