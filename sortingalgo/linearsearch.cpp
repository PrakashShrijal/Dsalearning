#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int linearsearch(vector<int> &input, int target){
    for (int i = 0; i < input.size(); i++)
    {  
        if (input[i] == target)
        {
            return i;
        }
    
    }

    return -1;

        
}

int main()
{
vector<int> v(10);
cout<<"enter the elements in the  10 array : ";
for (int  i = 0; i < 10; i++)
{
    cin>>v[i];
}
cout<<endl;
int target;
cout<<"Enter the target element:";
cin>>target;
cout<<linearsearch(v,target);
    

return 0;
}