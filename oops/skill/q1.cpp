/*create a class book with name,price and number of pages as its attributes. The 
class shoud conatain following mmember function:
countbook(int  price )
isbookpresent(string title) */
#include<iostream>
using namespace std;
class book{
    public:
    char name;
    int price;
    int numberofpages;

    int countbook(int p){
        if (price < 1000)
        {
            return 1;// here is problem see it
        }else{
            return 0;
        }
    }
    bool isbookpresent(char book ){
        if (name == book)
        {
            return true;
        }else{
            return false;
        }    
    }
};
int main()
{
    book harrypotter;
    harrypotter.name = 'n';
    harrypotter.price = 1000;
    harrypotter.numberofpages = 500;
    cout<<harrypotter.countbook(1500)<<endl;
    cout<<harrypotter.isbookpresent('h');



}