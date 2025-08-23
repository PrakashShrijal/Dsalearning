#include<bits/stdc++.h>
using namespace std;
int maze(int row , int col){// end row & cols
    if(row<1 || col<1) return 0;
    if(row == 1 && col == 1) return 1;
    int rightPath = maze(row,col-1);
    int downPath = maze(row-1,col);
    return rightPath + downPath;
}
int main()
{ 
    int r,c;
    cout<<"Enter the ending row & col :";
    cin>>r>>c;
    cout<<maze(r,c);
return 0;
}