//static Member and function

#include<iostream>
using namespace std;
class Bikes{
    public:
    static int noOfBikes;  //this Belong to class.
    int tyreSize;
    int engineSize;

    Bikes (int tyreSize, int engineSize = 200){
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
    static void increaseNoOfBikes(){  // can access only statics members only
        noOfBikes++;
    }
};
int Bikes::noOfBikes = 10;  // this is becoz noOfBikes is of class.
int main()
{
    Bikes royalEnfield(15,350);
    Bikes bajaj(13);

    
    cout<<"royalEnfield bikes :"<<royalEnfield.noOfBikes<<endl;
     cout<<"Bajaj no of bikes :"<<bajaj.noOfBikes<<endl;
     royalEnfield.increaseNoOfBikes();  // calling  through  object , increase data for all objects.
     cout<<"royalEnfield bikes :"<<royalEnfield.noOfBikes<<endl;
     cout<<"Bajaj no of bikes :"<<bajaj.noOfBikes<<endl;
    bajaj.increaseNoOfBikes();  // calling  through  object
    cout<<"royalEnfield bikes :"<<royalEnfield.noOfBikes<<endl;
     cout<<"Bajaj no of bikes :"<<bajaj.noOfBikes<<endl;

    Bikes::increaseNoOfBikes();  //calling by class name using ::
     cout<<"royalEnfield bikes :"<<royalEnfield.noOfBikes<<endl;
    cout<<"Bajaj no of bikes :"<<bajaj.noOfBikes<<endl;
return 0;
}