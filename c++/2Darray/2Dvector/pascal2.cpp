#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> > pascal(int numRows){
    int m = numRows;
    vector<vector<int>> v;


    // generate vector pascal
    for (int  i = 0; i < m; i++)
    {    vector<int> a(i+1);
            v.push_back(a);
        for(int j = 0; j<= i; j++){
          
            if(j==0 || j==i){
                v[i][j] = 1;
            }else{
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }
    return v;
}

int main()
{
    int n ;
    cout<<"Enter the value of :";
    cin>>n;
    vector<vector<int>> v = pascal(n);

    // print
    for (int  i = 0; i < v.size(); i++)
    {
        for(int j= 0 ; j<= i ; j++){
            cout<< v[i][j]<<" ";

        }
        cout<<endl;
    }
    
    
return 0;
}