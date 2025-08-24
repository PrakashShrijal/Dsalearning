#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int date;
    int month;
    int year;

public:
    // Setter function
    void setter(int date, int month, int year) {
        this->date = date;
        this->month = month;
        this->year = year;
    }

    // Getter function
    string getter() {
        return to_string(date) + "/" + to_string(month) + "/" + to_string(year);
    }

    // Overloading the equality operator
    bool operator==(const Date& other) {
        return (this->date == other.date) && (this->month == other.month) && (this->year == other.year);
    }

   
};

int main() {
    Date d1, d2;
    d1.setter(3, 5, 2004);
    d2.setter(2, 5, 2004);

    cout << "Date 1: " << d1.getter() << endl;
    cout << "Date 2: " << d2.getter() << endl;

    if (d1 == d2) {
        cout << "Equal" << endl;
    } else {
        cout << "Unequal" << endl;
    }

    return 0;
}
