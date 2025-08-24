#include<iostream>
#include<string.h>
using namespace std;
struct Books
{
    char title[50];
    char author[50];
    char type[100];
    int price;
}b1,b2,b3;
int main()
{
    
    strcpy(b1.title,"India That is Bharat");
    strcpy(b1.author, "J SAI DEEPAK");
    strcpy(b1.type ,"Comprehensive Trilogy");
    b1.price = 600;

    
    strcpy(b2.title,"Deep work");
    strcpy(b2.author, "Cal Newport");
    strcpy(b2.type ,"self help");
    b2.price = 500;

    
    strcpy(b3.title,"Business of 21st Century");
    strcpy(b3.author, "Robert T.Kiyosaki");
    strcpy(b3.type ,"Network Marketing");
    b3.price = 300;

    cout<<"Book Title :"<<b1.title<<endl;
    cout<<"Book Author :"<<b1.author<<endl;
    cout<<"Book Type :"<<b1.type<<endl;
    cout<<"Book Price :"<<b1.price<<endl;
    cout<<"Book Title :"<<b2.title<<endl;
    cout<<"Book Author :"<<b2.author<<endl;
    cout<<"Book Type :"<<b2.type<<endl;
    cout<<"Book Price :"<<b2.price<<endl;
    cout<<"Book Title :"<<b3.title<<endl;
    cout<<"Book Author :"<<b3.author<<endl;
    cout<<"Book Type :"<<b3.type<<endl;
    cout<<"Book Price :"<<b3.price<<endl;

    return 0;
}
