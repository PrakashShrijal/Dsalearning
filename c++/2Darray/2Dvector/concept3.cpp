#include <iostream>
#include <vector>
using namespace std;
void change(vector<vector<int> > &v){  // no need to put size , & needded.
    v[0][1] = 100;
}
void length(vector<vector<int> > &v){  // 2D vector
    cout<<v.size();
}
int main()
{
   
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    vector<int> v2;
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    vector<int> v3;
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    v3.push_back(11);
    v3.push_back(12);
    v3.push_back(13);
    v3.push_back(14);


     vector<vector<int> >v; 
   v.push_back(v1);
   v.push_back(v2);
   v.push_back(v3);

   cout<<v[0][1]<<endl;
   change(v);
   cout<<v[0][1]<<endl;
   length(v);
   cout<<endl;
  cout<< v[0].size()<<endl;
   cout<< v[1].size()<<endl;
    cout<< v[2].size()<<endl;


// concept of initialization 2D  vector
                     //       3 is row and 4 is column and all element is initialization with 20.
     vector<vector <int> > v4(3,vector<int> (4,20));
 for (int i = 0; i < 3; i++)
 {
    for (int j = 0; j < 4; j++)
    {
        cout<<v4[i][j]<<" ";
    }
    cout<<endl;
 }
 

    return 0;
}