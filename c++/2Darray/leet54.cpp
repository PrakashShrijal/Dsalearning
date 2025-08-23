#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows :";
    cin >> n;
    cout << "Enter the number of column :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m - 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // output in spiral
    int minr = 0, minc = 0;
    int maxr = n - 1, maxc = m - 1;
    int tne = n*m;
    int count = 0;

    while (minr <= maxr && minc <= maxc)
    {
        // right
        for (int j = minc; j <= maxc && count<tne; j++)
        {
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;
       
        // down
        for (int i = minr; i <= maxr && count<tne; i++)
        {
            cout << arr[i][maxc] << " ";
             count++;
        }
        maxc--;
       
        // Left
        for (int j = maxc; j >= minc && count<tne; j--)
        {
            cout << arr[maxr][j] << " ";
             count++;
        }
        maxr--;
      
        // up
        for (int i = maxr; i >= minr && count< tne; i--)
        {
            cout << arr[i][minc] << " ";
             count++;
        }
        minc++;
    }
    // output as 1 2 3 4 8 12 11 10 9 5 6 7 

    return 0;
}