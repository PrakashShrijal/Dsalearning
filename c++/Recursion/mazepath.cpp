//maze path
#include<bits/stdc++.h>
using namespace std;
int maze(int sr, int sc,int er, int ec){// sr,sc starting row and column/ er,ec ending row & column.
    if(sr == er && sc==ec) return 1;
    if(sr>er && sc>ec) return 0;
    int rightWays = maze(sr,sc+1,er,ec);
    int leftWays = maze(sr+1, sc,er,ec);
    return rightWays + leftWays;
}
int main()
{
    int sr,sc;
    sr = sc = 0;
    int er,ec;
    cout<<"Emter the ending rows and column:";
    cin>>er>>ec;
   cout<< maze(0,0,er,ec);
return 0;
}