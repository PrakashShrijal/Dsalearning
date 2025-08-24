#include <iostream>
#include <string>
using namespace std;
class student
{
protected:
    string name;
    int rollNo;

public:
    student(string n, int r)
    {
        name = n;
        rollNo = r;
    }
};
class Exam : public student
{
private:
    int oopsMarks;
    int dsaMarks;

public:
    Exam(int o, int d, string n, int r) : student(n, r)
    {
        oopsMarks = o;
        dsaMarks = d;
    }
};
class Sports
{
protected:
    int sportsMarks;

public:
    Sports(int sp) : sportsMarks(sp) {}
};
class Result : public Exam, public Sports
{
protected:
    int total;
    double average;

public:
    Result(int o, int d, string n, int r, int sp) : Exam(o, d, n, r, ), Sports(sp)
    {
        total = o + d + sp:
        average = total /3.0;
    }
    int totalMarks()
    {
        return oopsMarks + dsaMarks + sportsMarks;
    }
    double averageMarks()
    {
        return total / 3.0;
    }
    void display()
    {
        cout << "name :" << name << endl;
        cout << "Roll no. :" << rollNo << endl;
        cout << "OOPs Marks :" << oopsMarks << endl;
        cout << "DSA Marks :" << dsaMarks << endl;
        cout << "sports Marks :" << sportsMarks << endl;
        cout << "Total Marks :" << totalMar() << endl;
        cout << "Average marks Obtained :" << averageMarks() << endl;
    }
};

int main()
{
    Result students[3] = {
        Result(38,35,"prakash",157,40),
        Result(36,37,"nitin",151,40),
        Result(35,34,"mohit",130,40)
    };
    for (int i = 0; i < 3; i++)
    {
        students[i].display();
        cout<<endl;
    }
    
   
    return 0;
}