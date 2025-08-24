#include <iostream>
using namespace std;

class ObjectCounter {
public:
    ObjectCounter() {
        count++;
        cout << "Object created. Total objects: " << count << endl;
    }

    ~ObjectCounter() {
        count--;
        cout << "Object destroyed. Total objects: " << count << endl;
    }

    static int getCount() {
        return count;
    }

private:
    static int count;
};

int ObjectCounter::count = 0;

int main() {
    {
       ObjectCounter obj1;
        ObjectCounter obj2;
       cout << "Total objects: " << ObjectCounter::getCount() << endl;
       cout<<obj1.getCount()<<endl;//can be called by any  objects.
    }
        cout << "Total objects: " << ObjectCounter::getCount() << endl;
        
    return 0;
}