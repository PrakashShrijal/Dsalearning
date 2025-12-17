import java.util.Scanner;

public class MatrixMultiplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input for the first matrix
        System.out.print("Enter the number of rows for matrix 1: ");
        int m = sc.nextInt();
        System.out.print("Enter the number of columns for matrix 1: ");
        int n = sc.nextInt();

        int[][] a = new int[m][n];

        System.out.println("Enter the elements for matrix 1:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        // Input for the second matrix
        System.out.print("Enter the number of rows for matrix 2: ");
        int o = sc.nextInt();
        System.out.print("Enter the number of columns for matrix 2: ");
        int p = sc.nextInt();

        int[][] b = new int[o][p];

        System.out.println("Enter the elements for matrix 2:");
        for (int i = 0; i < o; i++) {
            for (int j = 0; j < p; j++) {
                b[i][j] = sc.nextInt();
            }
        }

        // Matrix multiplication condition
        if (n == o) {
            // Matrix multiplication
            int[][] result = new int[m][p];
            
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < p; j++) {
                    result[i][j] = 0;
                    for (int k = 0; k < n; k++) {  // (n== o) 
                        result[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            // Display the result
            System.out.println("\nResultant matrix after multiplication:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < p; j++) {
                    System.out.print(result[i][j] + " ");
                }
                System.out.println();
            }
        } else {
            System.out.println("Matrix cannot be multiplied!");
        }

        sc.close();
    }
}
