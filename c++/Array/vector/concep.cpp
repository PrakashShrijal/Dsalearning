#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{     //vector<int> v(8); this is vector with size initilisatiion.
    vector<int> v; //need not to mention size of vector
    //insertion /does not usues []
    //v[0] = 22; this is wrong since size is not defined in vector.
   /*v.push_back(5);
    v.push_back(3);
    v.push_back(7);
    v.push_back(2);
    v.push_back(9);
    cout<<v[0]<<endl;
      //updation of 0 index;
    v[0] = 88; // this happens after memory allocation/ size is allocated
    cout<<v[0]<<endl; //value changed
    
    cout<<v[3];
 */                //size,capacity
  v.push_back(2); //1      1
  v.push_back(34);// 2     2
  v.push_back(56);// 3     4 
  v.push_back(67);// 4     4
  v.push_back(65);// 5     8 
  v.push_back(44);// 6     8 
  v.push_back(3);// 7      8 
  v.push_back(1);// 8      8
  v.push_back(76);// 8     16

  for (int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  
  cout<<"size is :" <<v.size()<<endl;    //concept of size and capacity? it is not same
  cout<<"capacity :"<<v.capacity()<<endl;

return 0;
}