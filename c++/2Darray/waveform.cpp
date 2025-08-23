#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the numebr of rows :";
    cin >> n;
    cout << "Enter the number of columns :";
    cin >> m;
    int p[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> p[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    // Wave form printing.
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << p[i][j] << " ";
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << p[i][j] << " ";
            }
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << p[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << p[i][j] << " ";
            }
        }
    }
    cout << endl;

    for (int i = n; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << p[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << p[i][j] << " ";
            }
        }
    }

    return 0;
}