#include <iostream>
#include <string>

using namespace std;

// Base class
class Person {
protected:
    string name;
    int id;
    double salary;

public:
    virtual void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void displayData() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }

    virtual double calculateBonus() = 0; // Pure virtual function
};

// Derived class for Admin
class Admin : public Person {
public:
    void getData() override {
        Person::getData(); // Call base class getData
    }

    void displayData() override {
        cout << "Admin Details:" << endl;
        Person::displayData(); // Call base class displayData
    }

    double calculateBonus() override {
        return salary * 0.10; // 10% bonus for Admin
    }
};

// Derived class for Account
class Account : public Person {
public:
    void getData() override {
        Person::getData(); // Call base class getData
    }

    void displayData() override {
        cout << "Account Details:" << endl;
        Person::displayData(); // Call base class displayData
    }

    double calculateBonus() override {
        return salary * 0.15; // 15% bonus for Account
    }
};

// Master class to manage employees
class Master {
private:
    Person* employee; // Base class pointer

public:
    void setEmployee(Person* emp) {
        employee = emp;
    }

    void showEmployeeDetails() {
        if (employee) {
            employee->displayData();
            cout << "Bonus: " << employee->calculateBonus() << endl;
        }
    }
};

int main() {
    Master master;
    Admin admin;
    Account account;

    // Get data for Admin
    cout << "Enter Admin details:" << endl;
    admin.getData();
    master.setEmployee(&admin);
    master.showEmployeeDetails();

    cout << endl;

    // Get data for Account
    cout << "Enter Account details:" << endl;
    account.getData();
    master.setEmployee(&account);
    master.showEmployeeDetails();

    return 0;
} 