import java.util.Scanner;

public class sort{
public static void sort(int[] a){
int n = a.length;
for(int i =0 ; i < n; i++){
for(int j =0; j < n-i-1; j++){
if(a[j] > a[j+1]){
int temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}
}


public static void main(String  args[]){
Scanner sc = new Scanner(System.in);
System.out.print("Enter the number of element :");
int n = sc.nextInt();
int [] a = new int[n];
for(int i = 0; i < n; i++){
a[i] = sc.nextInt();
}
System.out.println("Element of the before sort:");

for(int i = 0; i <n ; i++){
System.out.print(a[i]+" ");
}

sort(a);
System.out.println("\n Element after the Sort : ");

for(int i = 0; i <n ; i++){
System.out.print(a[i]+" ");
}
System.out.print(" \n The the third element of the array is :" + a[2]);


}
}