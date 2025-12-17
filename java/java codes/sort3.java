import java.util.Scanner;

public class Sort {
    // Make sort() method static so it can be called from the static main() method
    public static void sort(int[] a) {
        int n = a.length;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) { // Fixed loop boundary: j < n - i - 1
                if (a[j] > a[j + 1]) {
                    // Swap elements
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] a = new int[n];

        // Input the elements of the array
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        // Display the array before sorting
        System.out.println("Elements before sorting:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }

        // Sort the array
        sort(a);

        // Display the array after sorting
        System.out.println("\nElements after sorting:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }

        // Display the third element (index 2)
        if (n >= 3) {
            System.out.println("\nThe third element of the array is: " + a[2]);
        } else {
            System.out.println("\nThere is no third element in the array.");
        }
    }
}


------------------------------------------------------------------------------------------------------
import java.util.Scanner;

public class Sort {
    // Make sort() method static so it can be called from the static main() method
    public static void sort(int[] a) {
        int n = a.length;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) { // Fixed loop boundary: j < n - i - 1
                if (a[j] > a[j + 1]) {
                    // Swap elements
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int[] a = new int[n];

        // Input the elements of the array
        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        // Display the array before sorting
        System.out.println("Elements before sorting:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }

        // Sort the array
        sort(a);

        // Display the array after sorting
        System.out.println("\nElements after sorting:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }

        // Display the third element (index 2)
        if (n >= 3) {
            System.out.println("\nThe third element of the array is: " + a[2]);
        } else {
            System.out.println("\nThere is no third element in the array.");
        }
    }
}
