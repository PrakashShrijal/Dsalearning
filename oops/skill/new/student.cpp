/*Create a class to specify data on students with these attributes:

Roll number, Name, Department, Course,

Year of joining. Create

2 class variables. Now, create a member function to check if two

students have the same

Department.
*/

#include<bits/stdc++.h>
using namespace std;
class student{
    private :
    int roll_Number;
    string name;
    string department;
    string course;
    int yearOfJoining;
    // class variable.........
    static int totalStudent;
    static string collegeName;
     public :
    student(int roll,const string& na,const string& dep,const string& cour,int yoc) : roll_Number(roll),name(na),
      department(dep),course(cour),yearOfJoining(yoc){
        totalStudent++;
      }

      bool sameDeptment(const student & other) const{
        return this->department == other.department;

      }
      static int gettotalstudent(){
        return totalStudent;
      }

      static void setcollegeName(const string& name){
        collegeName = name;
      }

      void display()const {
        cout<<"Roll Number :"<<roll_Number<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Department :"<<department<<endl;
        cout<<"Course :"<<course<<endl;
        cout<<"Year of Joining :"<<yearOfJoining<<endl;
        cout<<"College Name :"<<collegeName<<endl;
        cout<<"................................."<<endl;
      }


};

int student :: totalStudent = 0;
string student ::collegeName = "Default College";
 
int main()
{
    student ::setcollegeName("Delhi University");

    student s1(101, "John Doe", "Computer Science", "B.Tech", 2022);
    student s2(102, "Jane Smith", "Electrical Engineering", "B.Tech", 2021);
    student s3(103, "Bob Johnson", "Computer Science", "M.Tech", 2023);

    s1.display();
    s2.display();
    s3.display();


    cout << "Do s1 and s2 have same department? "
         << (s1.sameDeptment(s2) ? "Yes" : "No") << endl;
    cout << "Do s1 and s3 have same department? "
         << (s1.sameDeptment(s3) ? "Yes" : "No") << endl;


          cout << "\nTotal students: " << student::gettotalstudent() << endl;

return 0;
}