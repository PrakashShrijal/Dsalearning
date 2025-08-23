#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int> v;
  v.push_back(2); //1 1
  v.push_back(34);// 2 2
  v.push_back(56);// 3 4 
  v.push_back(67);// 4 4
  v.push_back(65);// 5 8 
  v.push_back(44);// 6 8 
  v.push_back(3);
//   cout<<v[2];
//   v.at(2) = 60; //can be use to modify value in printing too. like []
//   cout<<v.at(2);
for (int i = 0; i < v.size(); i++)
{
    cout<<v.at(i)<<" ";
}
cout<<endl;

// sorting in vector
sort(v.begin(),v.end());
for (int i = 0; i < v.size(); i++)
{
    cout<<v.at(i)<<" ";
}



return 0;
}