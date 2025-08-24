
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
private:
    int oopsMarks;
    int dsaMarks;
public:
    Exam(int o, int d, string n, int r) : Student(n, r) {
        oopsMarks = o;
        dsaMarks = d;
    }
    int getOOPSMarks() {
        return oopsMarks;
    }
    int getDSAMarks() {
        return dsaMarks;
    }
};

class Sports {
protected:
    int sportsMarks;
public:
    Sports(int sp) : sportsMarks(sp) {}
    int getSportsMarks() {
        return sportsMarks;
    }
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
        return getOOPSMarks() + getDSAMarks() + getSportsMarks();
    }
    double averageMarks() {
        return total / 3.0;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll no.: " << rollNo << endl;
        cout << "OOPs Marks: " << getOOPSMarks() << endl;
        cout << "DSA Marks: " << getDSAMarks() << endl;
        cout << "Sports Marks: " << getSportsMarks() << endl;
        cout << "Total Marks: " << totalMarks() << endl;
        cout << "Average marks Obtained: " << averageMarks() << endl;
    }
};

int main() {
    Result students[3] = {
        Result(38, 35, "Prakash", 157, 45),
        Result(40, 30, "Nitin", 158, 42),
        Result(36, 32, "Mohit", 159, 41)
    };

    for (int i = 0; i < 3; i++) {
        students[i].display();
        cout << endl;
    }

    return 0;
}