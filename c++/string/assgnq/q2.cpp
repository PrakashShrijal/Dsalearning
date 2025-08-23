// input a string of length n and count all the consonent in the given string.....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. :";
    cin >> n;
    string s;
    cout << "Enetr the string: ";
    cin >> s;
    int count = 0;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     string vowel = "aeiouAEIOU";
    //     for (int j = 0; j < vowel.length(); j++)
    //     {
    //         if (s[i] == vowel[j])
    //             count++;
    //     }
    // }
    // cout << count;
    // here the time complexity is O(n*m);
    //more efficient code................
      for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||
        s[i] == 'A' ||s[i] == 'I' ||s[i] == 'E' ||s[i] == 'O' ||s[i] == 'U' )
        count++;
    }
    cout << count;
    
    return 0;
}