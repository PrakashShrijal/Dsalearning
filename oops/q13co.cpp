#include<iostream>
#include<string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }
};

class Exam : public Student {
protected:     // what if private is used here. refer to (inheritancewith in try.)
    int oopsMarks;
    int dsaMarks;
public:
    Exam(int o, int d, string n, int r) : Student(n, r) {
        oopsMarks = o;
        dsaMarks = d;
    }
};

class Sports {
protected:
    int sportsMarks;
public:
    Sports(int sp) : sportsMarks(sp) {}
};

class Result : public Exam, public Sports {
protected:
    int total;
    double average;
public:
    Result(int o, int d, string n, int r, int sp) : Exam(o, d, n, r), Sports(sp) {
        total = o + d + sp;
        average = total / 3.0;
    }
    int totalMarks() {
        return oopsMarks + dsaMarks + sportsMarks; //you cannot access these marks if these were private in base class.
    }
    double averageMarks() {
        return total / 3.0;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll no.: " << rollNo << endl;
        cout << "OOPs Marks: " << oopsMarks << endl;
        cout << "DSA Marks: " << dsaMarks << endl;
        cout << "Sports Marks: " << sportsMarks << endl;
        cout << "Total Marks: " << totalMarks() << endl;
        cout << "Average marks Obtained: " << averageMarks() << endl;
    }
};

int main() {
    Result students[3] = {
        Result(38, 35, "Prakash", 157, 40),
        Result(40, 30, "Nitin", 151, 40),
        Result(36, 32, "Mohit", 133, 40)
    };

    for (int i = 0; i < 3; i++) {
        students[i].display();
        cout << endl;
    }

    return 0;
}