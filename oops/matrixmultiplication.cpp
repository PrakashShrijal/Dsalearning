#include <iostream>
using namespace std;

class Matrix
{
private:
    int **matrix;
    int rows;
    int cols;

public:
    // Constructor to initialize matrix
    Matrix(int r, int c)
    {
        rows = r;
        cols = c;
        matrix = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            matrix[i] = new int[cols];
        }
    }

    // Destructor to free memory
    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // Function to input values for matrix
    void getData()
    {
        cout << "Enter elements of the matrix: " << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> matrix[i][j];
            }
        }
    }

    // Function to display the matrix
    void show()
    {
        cout << "Matrix: " << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to multiply two matrices
    Matrix *mul(Matrix *m)
    {
        if (cols != m->rows)
        {
            cout << "Matrices cannot be multiplied." << endl;
            return NULL;
        }

        Matrix *result = new Matrix(rows, m->cols);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < m->cols; j++)
            {
                result->matrix[i][j] = 0;
                for (int k = 0; k < cols; k++)
                {
                    result->matrix[i][j] += matrix[i][k] * m->matrix[k][j];
                }
            }
        }
        return result;
    }
};

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter number of rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns for second matrix: ";
    cin >> r2 >> c2;

    Matrix *m1 = new Matrix(r1, c1);
    Matrix *m2 = new Matrix(r2, c2);

    m1->getData();
    m2->getData();

    cout << "First Matrix: " << endl;
    m1->show();
    cout << "Second Matrix: " << endl;
    m2->show();

    Matrix *result = m1->mul(m2);
    if (result != NULL)
    {
        cout << "Resultant Matrix: " << endl;
        result->show();
        delete result;
    }

    delete m1;
    delete m2;

    return 0;
}