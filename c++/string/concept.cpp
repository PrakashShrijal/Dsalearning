// what  is string -> it is basically char array.

#include<iostream>
#include<string>
using namespace std;
int main()
{   
    // char str[5] = {'a','b','c','d','e'};
    // char str[5] = "abcde";(  error array of chars is too long )
    //char str[5] = "abcd";  // it runs without error why?
   

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<str[i]<<" ";
    // }
    // cout<<endl;
    cout<<"My name is prakash shrijal";
    cout<<endl;
    char ch = 'a';
    cout<<(int)ch;  // type casting
    char str[] =  {'a','b','c','d','e','f'};
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout<<str[i]<<" ";
    }
    
cout<<str<<endl;  // it will not  give error but in case of int arr it will give. 

// string is char array.
string arr = "prakash";
cout<<arr[0]<<endl;
cout<<arr<<endl;


// taking string as input.
// string p;
// cin>>p;  // prakash  is leo 
// cout<<p<<endl;  // prakash      (why only prakash in output?) concept of cin

// to tackle this problem we use getline.
string q;
getline(cin,q);
cout<<q;


return 0;
}