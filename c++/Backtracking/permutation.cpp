#include <bits/stdc++.h>
using namespace std;
void permutation(string input, string output)  // Pure recusion and uisng brute brute force...
{
    if (input.size() == 0)
    {
        cout << output << "\n";
        return;
    }
    for (int i = 0; i < input.size(); i++)
    {
        char ch = input[i];
        string left = input.substr(0, i);
        string right = input.substr(i + 1);
        string ros = left + right;
        permutation(ros, output + ch);
    }
}
int main()
{ 
    string  name ;
    cout<<"Enter the Name :";
    cin>>name;
    string output ="";
    permutation(name,output);
    return 0;
}