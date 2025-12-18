//stringstream claas
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    // given a sentence str return the word that is occuring most number of times in that sentences.
    string str = "prakash is great man. He is a millionaire. is  is ";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while (ss>>temp)    // taking input from ss in temp.....
    {
        v.push_back(temp);
    }
    // printing vector
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());
    cout<<endl; 
      for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    cout<<endl;
    int maxCount = 1;
    int count = 1;
    
    for (int i = 1; i < v.size(); i++)
    {  if (v[i] == v[i-1])
    {
        count++;
    }else count = 1;
     maxCount = max(maxCount,count); // if maxcount< cont then maxcount = count
    }
    count  = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i-1])
        {
           count++;
        }else count = 1;
        if (count == maxCount)
        {
            cout<<v[i]<<" "<<maxCount<<endl;
        }
        
        
    }
    


return 0;
}