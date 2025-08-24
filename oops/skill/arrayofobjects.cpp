#include<iostream>
#include<string>
using namespace std;
class Crickter{
    public:
    string name;
    int age;
    int nOfTestMatches;
    float avgRunScore;

    Crickter(): name(""),age(0),nOfTestMatches(0),avgRunScore(0){}

    Crickter(string n,int a,int tm,float ar){
        name = n;
        age = a;
        nOfTestMatches = tm;
        avgRunScore = ar;
    }

    void display(){
        cout<<"Name"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"nOf test Matches played"<<nOfTestMatches<<endl;
        cout<<"Average Run Scored"<<avgRunScore<<endl;
        cout<<"----------------------------------"<<endl;
    }

};




int main()
{
    Crickter Crickters[20];
    for (int i = 0; i < 20; i++)
    {
        string name;
        int age,nOfTestMatches;
        float avgRunScore;

        cout<<"Enter deatils for Crickter"<<i+1<<":"<<endl;
        cout<<"Name :";
        cin.ignore();
        getline(cin,name);
        cout<<"Age";
        cin>>age;
        cout<<"Number of test Matches Played :";
        cin>>nOfTestMatches;
        cout<<"Enter the average Run Scored by player :";
        cin>>avgRunScore;
        // to score data in the array
        Crickters[i] = Crickter(name,age,nOfTestMatches,avgRunScore);
        cout<<endl;
    }

    cout<<"Crickter Details:"<<endl;
    for (int i = 0; i < 20; ++i)
    {
        Crickters[i].display();
    }
    
    
return 0;
}