//sort the string in descresing order value assosicated after the removal of values smaller than the x...
#include<bits/stdc++.h>
using namespace std;
void bubblesort(string &s){
    int n = s.size();
    for (int i = 0; i < n-1; i++)
    {     bool flag = true;
        for (int j = 0; j < n-i-1; j++)
        {
            if(s[j] > s[j+1]){
                //swap(s[j], s[j+1]);
                char temp = s[j];
                s[j] = s[j + 1];
                s[j +1] = temp;
                flag = false;
            }
        }
        if(flag == true){
            break;
        }
    }
    
}
int main()
{

    string s = "AGDIXZVCNXZIRUXZZQYEYP";
    string str ="";
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'X')
        {
            str += s[i];
        }
        
    }
    cout<<str<<endl;

    bubblesort(str);
    cout<<str;
    
return 0;
}