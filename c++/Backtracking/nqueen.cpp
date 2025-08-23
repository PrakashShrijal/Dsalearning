#include<bits/stdc++.h>
using namespace std;

vector<vector<char> > grid;
vector<vector<int> > result;

bool canPlaceQueen(int row, int col, int n){
    //column check
    for (int  i = row-1; i >= 0; i--)
    {
        if(grid[i][col] == 'Q')    // we are attacked
        return false;
    }
    // left diag check
    for (int i = row-1, j = col - 1; i >= 0 and j >= 0;  i-- ,j--)
    {
            if(grid[i][j] ==  'Q')   // we are attaced
            return false;
    }
    // left diag check
    for (int i = row-1, j = col -1; i>=0 and j>=0 ; i--, j--)
    {
        if(grid[i][j] == 'Q')   // we are attacked
        return false;
    }
    // right diag check
    for (int i = row-1 , j = col + 1; i >= 0 and j< n; i--, j++)
    {
        if(grid[i][j] == 'Q')   // we are attacked
        return false;
    }

    return true;    
}

void f(int row, int n){
    if(row == n){
        //we got possible ans
        vector<string> temp;
        for (int i = 0; i < n; i++)
        {
            string res = "";
            for (int j = 0; j < n; j++)
            {
                res += grid[i][j];
            }
            temp.push_back(res);
        }
        result.push_back(temp);
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if(canPlaceQueen(row,col,n)){
            grid[row][col] ='Q';
            f(row+1, n);
            grid[row][col] = '.';
        }
    }
    
}
int main()
{

return 0;
}