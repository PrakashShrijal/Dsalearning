#include <iostream>
#include <string>
using namespace std;

// Base class: Student
class Student {
protected:
    string name; 
    int rollNo;

public:
    void getStudentData() {
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll number: ";
        cin >> rollNo;
    }

    void displayStudentData() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived class: Exam
class Exam : public Student {
protected:
    int marksSubject1;
    int marksSubject2;

public:
    void getExamData() {
        cout << "Enter the marks for Subject 1: ";
        cin >> marksSubject1;
        cout << "Enter the marks for Subject 2: ";
        cin >> marksSubject2;
    }

    void displayExamData() {
        cout << "Marks in Subject 1: " << marksSubject1 << endl;
        cout << "Marks in Subject 2: " << marksSubject2 << endl;
    }
};

// Derived class:   Sports
class Sports {
protected:
    int sportsMarks;

public:
    void getSportsData() {
        cout << "Enter the marks in Sports: ";
        cin >> sportsMarks;
    }

    void displaySportsData() {
        cout << "Marks in Sports: " << sportsMarks << endl;
    }
};

// Derived class: Result
class Result : public Exam, public Sports {
private:
    int total;
    float average;

public:
    void calculate() {
        total = marksSubject1 + marksSubject2 + sportsMarks;
        average = total / 3.0; // Ensure floating-point division
    }

    void displayResult() {
        displayStudentData(); // Display student data
        displayExamData();    // Display exam data
        displaySportsData();  // Display sports data
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    Result candidate;

    // Get data from the user
    candidate.getStudentData();
    candidate.getExamData();
    candidate.getSportsData();

    // Calculate total and average
    candidate.calculate();

    // Display the results
    candidate.displayResult();

    return 0;
}