#include<iostream>
using namespace std;
class A{
    int a_private = 19;
    public:
    friend void show(A &a);   //why adress is given here ? class name is also  important.
    void show2(){
        cout<<a_private<<endl;
    }
};
void show(A &a){
    cout<<a.a_private<<endl;
}

int main()
{
    A a;
    show(a);      // we are calling here by a.show since it is friend function.
    
return 0;
}