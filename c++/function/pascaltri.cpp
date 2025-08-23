#include<iostream>
using namespace std;
void pascaltri(int n){
     for (int i = 0; i <=n; i++)
    {
        int curr = 1;
        for (int j = 0; j <= i; j++)
        {
            cout<<curr;
            curr = curr*(i-j)/(j+1);
             
        }
        cout<<endl;
    }
}
int main()
{


    // logic nCr+1 = nCr(n-r/r+1)
    cout<<"Enter the number :";

    int n;
    cin>>n;
    cout<<"the pascal triangle is :"<<endl;
   pascaltri(n);
    
return 0;
}