// Generate all the binary string of length "n" without consecutive.
#include <bits/stdc++.h>
using namespace std;
//printing all binary strings.....
void generate(string s, int n)
{
    if (s.length() == n)
    {
        cout << s << endl;
        return;
    }
    generate(s + '0', n);
    generate(s + '1', n);
}

// A/Q
 void generateBinaryString(int n, string s){
    if(n == 0){
        cout<<s<<endl;
        return;
    }
    generateBinaryString(n-1, s+'0');
    if(s.length() == 0 || s[s.length()-1] == '0') generateBinaryString(n-1,s+'1');
 }

int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    generate("", n);
    cout<<endl;
    generateBinaryString(n,"");

    
    // // c ka idx hai 2, string len = 5 (0-5)
    // string str ="123456778";
    // cout<<str<<endl;
    // string left = str.substr(0,2);
    // cout<<left<<endl;
    // string right = str.substr(2+1);
    // cout<<right<<endl;
    // return 0;
}