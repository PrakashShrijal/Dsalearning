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
    while (minr <= maxr && minc <= maxc)
    {
        // right
        for (int j = minc; j <= maxc; j++)
        {
            cout << arr[minr][j] << " ";
        }
        minr++;
        if (minr > maxr || minc > maxr)    
            break;

        // down
        for (int i = minr; i <= maxr; i++)
        {
            cout << arr[i][maxc] << " ";
        }
        maxc--;
        if (minr > maxr || minc > maxr)
            break;
        // Left
        for (int j = maxc; j >= minc; j--)
        {
            cout << arr[maxr][j] << " ";
        }
        maxr--;
        if (minr > maxr || minc > maxr)
            break;
        // up
        for (int i = maxr; i >= minr; i--)
        {
            cout << arr[i][minc] << " ";
        }
        minc++;
    }

    return 0;
}