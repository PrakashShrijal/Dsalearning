#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    char name[15];
    int rollNo;
};
class Exam : virtual public Student
{
public:
    int sub1;
    int sub2;
};
class sports : virtual public Student
{
public:
    int sportsMarks;
};
class result : public Exam, public sports
{
public:
    int total;
    float average;
    void display()
    {
        cout << "Enter the  name of the student :" << endl;
        cin >> name;
        cout << "Enetr the roll number: " << endl;
        cin >> rollNo;
        cout << "Enter the marks of sub1 :" << endl;
        cin >> sub1;
        cout << "Enter the marks of sub2 :" << endl;
        cin >> sub2;
        cout << "Enter the marks of sports :" << endl;
        cin >> sportsMarks;
    }

    void calculate()
    {
        total = sub1 + sub2 + sportsMarks;
        average = total / 3.0;
        cout << "Total Marks of student" << name << "is :" << total << endl;
        cout << "Average granted to student " << name << "is :" << average << endl;
    }
};
int main()
{
    result candidate1;
    candidate1.display();
    candidate1.calculate();

    return 0;
}