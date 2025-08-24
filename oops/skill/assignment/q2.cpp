#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    string name;
    int Roll_NO;
    string Department;
    string Course;
    int D_O_J;
    public:
    Student(string nm, int rl,string dep, string cou,int doj){
        name = nm;
        Roll_NO = rl;
        Department = dep;
        Course = cou;
        D_O_J = doj;
    }


    bool operator ==(const Student& s1)const{
        return this->Department == s1.Department;
    }
    bool equal(const Student & s1)const {
        return this->Department == s1.Department;
    }


};
int main()
{
    Student s1("prakash",157,"CSE","CSE",2023);
    Student s2("shiva",890,"CSE","CSE",2089);
    if (s1==s2)
    {
        cout<<"department is equal"<<endl;
    }else{
        cout<<"department is not equal";
    }
    //   if (s1.equal(s2))
    // {
    //     cout<<"department is equal"<<endl;
    // }else{
    //     cout<<"department is not equal";
    // }
    
return 0;
}