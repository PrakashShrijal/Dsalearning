#include <bits/stdc++.h>
using namespace std;
 bool isItSafe(vector<vector<int>> & grid, int i, int j, int n)
    {
        return i >= 0 and j >= 0 and i < n and j < n and grid[i][j] == -1;
    }
    vector<int> dx{-2, -1, -2, -1, +2, +1, +2, +1};
    vector<int> dy{+1, +2, -1, -2, +1, +2, -1, -2}; // coordinates of the grid
    
    void display(vector<vector<int> > &grid , int n){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<grid[i][j]<<"  ";
            }
            cout<<"\n";
            
        }
        
    }

   void f(vector<vector<int>> &grid, int i, int j, int n, int count)
{
    // mark current cell
    grid[i][j] = count;

    // base case
    if (count == n*n - 1) {
        display(grid, n);
        cout << "*************\n\n";
        grid[i][j] = -1;  // backtrack
        return;
    }

    // explore all 8 knight moves
    for (int k = 0; k < 8; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];

        if (isItSafe(grid, ni, nj, n)) {
            f(grid, ni, nj, n, count + 1);
        }
    }

    // backtrack
    grid[i][j] = -1;
}

     void knightsTour(int n, int i, int j){
            vector<vector<int> > grid(n,vector<int> (n, -1)); // -1 denotes postion is vacant
            f(grid, i, j, n, 0);
        }
int main()
{
    knightsTour(5,0,0);


    // TC = (8)^n^2
    
    return 0;
}