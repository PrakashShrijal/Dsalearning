#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "enter the number of first rows: ";
    cin >> n;
    cout << "enter the number of first columns: ";
    cin >> m;
    int p[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> p[i][j];
        }
    }

    int a, b;
    cout << "enter the number of second rows: ";
    cin >> a;
    cout << "enter the number of second columns: ";
    cin >> b;
    int q[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> q[i][j];
        }
    }

    // Check if the dimensions are compatible for matrix addition
    if (n != a || m != b) {
        cout << "Error: Matrices cannot be added. They have different dimensions." << endl;
        return 1; // Exit with an error code
    }

    // Initialize the result matrix with the same dimensions as the input matrices
    int c = n;
    int d = m;
    int r[c][d];

    // Perform matrix addition
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            r[i][j] = p[i][j] + q[i][j];
        }
    }
    cout<<"sum of the resultant Matrix is:"<<endl;

    // Print the result matrix with spaces between elements
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
