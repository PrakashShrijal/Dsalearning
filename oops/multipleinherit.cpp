/*Write a C++ program to demonstrate multiple inheritance by
 creating a class cuboid which extends class rectangle,
 class shape. It calculates area and volume. Use appropriate constructors and member variables
*/
#include <iostream>
using namespace std;

// Base class Shape
class Shape {
protected:
    string name;
public:
    Shape(string n) {
        name = n;
    }

    void display() {
        cout << "Shape: " << name << endl;
    }
};

// Base class Rectangle
class Rectangle {
protected:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }
};

// Derived class Cuboid
class Cuboid : public Shape, public Rectangle {
private:
    double height;
public:                                           //inherited data members.
    Cuboid(string n, double l, double w, double h) : Shape(n), Rectangle(l, w) {
        height = h;
    }

    double calculateVolume() {
        return length * width * height;
    }

    void displayDetails() {
        display();
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Volume: " << calculateVolume() << endl;
    }
};

int main() {
    Cuboid cuboid("Cuboid", 10, 5, 3);
    cuboid.displayDetails();

    return 0;
}