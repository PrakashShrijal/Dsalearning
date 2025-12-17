import java.util.Scanner;

public class MatrixAddition { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Input for the first matrix
        System.out.print("Enter the number of rows for matrix 1: ");
        int m = sc.nextInt();
        System.out.print("Enter the number of columns for matrix 1: ");
        int n = sc.nextInt();
        
        int[][] a = new int[m][n];
        
        System.out.println("Enter the elements of matrix 1:");
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
        
        System.out.println("Enter the elements of matrix 2:");
        for (int i = 0; i < o; i++) {
            for (int j = 0; j < p; j++) {
                b[i][j] = sc.nextInt();
            }
        }

        // Check if the matrices can be Addition
        if (m == o && n==p) {
            // Matrix addition
            int[][] resl = new int[m][n];
            
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                   resl[i][j] = a[i][j] + b[i][j];             
                }
            }

            // Output the resulting matrix
            System.out.println("The result of the matrix Addition is:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(resl[i][j] + " ");
                }
                System.out.println();
            }
        } else {
            System.out.println("Matrix Addition is not possible!");
        }
        
        sc.close();
    }
}
