#include<iostream>
#include<string>
using namespace std;
int main()
{
    string p;
    cout<<"Enter the string :";
    getline(cin,p);
    cout<<p<<endl;
    for (int i = 0; p[i] != '\0'; i++)
    {
        if (i%2 == 0)
        {
            p[i] = 'a';
        }
        
    }
    cout<<p;

return 0;
}