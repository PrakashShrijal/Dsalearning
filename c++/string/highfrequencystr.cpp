#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    // string s = "prakashshrijal";
    // int max = 0;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     char ch = s[i];
    //     int count =  1;
    //     for (int j = i+1; j < s.length(); j++)
    //     {
    //         if (s[j] == s[i]) 
    //         {
    //             count++;
    //         }
            
    //     }
    //     if (max< count)
    //     {
    //         max = count;
    //     }     // T.C. = O(n^2)
        
        
    // }
    // cout<<max<<endl;

    //  for (int i = 0; i < s.length(); i++)

    // {
    //     char ch = s[i];
    //     int count =  1;
    //     for (int j = i+1; j < s.length(); j++)
    //     {
    //         if (s[j] == s[i]) 
    //         {
    //             count++;
    //         }
            
    //     }
    //     if (count == max)
    //     {
    //         cout<<ch<<" "<<max<<endl;
    //     }
        
    // }

    // best way to reduce time complexity.    T.C.-> O(n);
    string s = "leetcode prakash shrijal";
    vector<int> arr(26,0);
    for (int  i = 0; i < s.length(); i++)
    {
        char ch = s[i];  
        int ascii = (int)ch; //typecasting
        arr[ascii-97]++;  // asccii -97 gives the value at index eg [97-97 value at 0 index]
    }
    int mx = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
        
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == mx)
        {
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
        
    }
    
    
    
    
return 0;
}