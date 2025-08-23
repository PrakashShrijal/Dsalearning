#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of rows :";
    cin >> n;
    cout << endl;
    cout << "enter the number of columns: ";
    cin >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    // transpose in same martrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // if (n == m) {
    //     for (int i = 0; i < n; i++) {
    //         for (int j = i + 1; j < m; j++) {  // Corrected the condition here
    //             int temp = matrix[i][j];
    //             matrix[i][j] = matrix[j][i];
    //             matrix[j][i] = temp;
    //         }
    //     }

    //     // Display the transposed matrix
    //     cout << "Transposed Matrix:" << endl;
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < m; j++) {
    //             cout << matrix[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // } else {
    //     cout << "Transposition is only valid for square matrices." << endl;
    // }

    return 0;
}