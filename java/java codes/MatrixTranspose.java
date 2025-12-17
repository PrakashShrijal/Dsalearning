import java.util.Scanner;

public class MatrixTranspose {
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);

        // Input for matrix dimensions
        System.out.print("Enter the number of rows: ");
        int n = sc.nextInt(); // rows
        System.out.print("Enter the number of columns: ");
        int m = sc.nextInt(); // columns

        // Create matrix
        int[][] matrix = new int[n][m];

        // Input matrix elements
        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        // Display the original matrix
        System.out.println("Original matrix:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println();

        // Transpose the matrix in-place
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < m; j++) {
                // Swap the elements
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // Display the transposed matrix
        System.out.println("Transposed matrix:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
