//print paths using two parameter.
#include<bits/stdc++.h>
using namespace std;
void path(int er, int ec, string s){
    if(er<0 || ec< 0) return;
    if(er==1 && ec ==1){
        cout<<s<<endl;
    }
    path(er-1,ec,s+'R');
    path(er,ec-1,s+'C');
}

int main()
{
    int er,ec;
    cout<<"Enter the ending rows and ending column :";
    cin>>er>>ec;
    path(er,ec,"");
return 0;
}