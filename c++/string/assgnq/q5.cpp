// input a string of length less than 10 and convert it into integer without using buitin function....
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cout << "Enter the string less than 10 :";
    cin >> s;
    cout<<s<<endl;
     int result = 0;
    
    // Iterate over each character in the string
    for (int i = 0; i < s.length(); i++) {
        // Convert each character to the corresponding integer
        result = result * 10 + (s[i] - '0');
    }

    cout << "Converted integer: " << result << endl;

    return 0;
}
    

