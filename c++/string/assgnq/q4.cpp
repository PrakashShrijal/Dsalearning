#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string :";
    cin >> s;
    cout<<s<<endl;
    if (s.size() %2 != 0)
    {
        cout<<"Invalid input."<<endl;

    }else{
    reverse(s.begin()+ (s.length()/2),s.end());
    cout<<s;
    }
    
    
    return 0;
}