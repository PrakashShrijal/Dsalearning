#include<iostream>
#include<string>
using namespace std;

void printSubstring(string ans,string original,int idx){
    if(idx == original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    printSubstring(ans+ch,original,idx+1);
}

int main()
{
 string str ="prakash";
 int n;
 cout<<"Enter the number :";
 cin>>n;
 printSubstring("",str,n);

return 0;
}