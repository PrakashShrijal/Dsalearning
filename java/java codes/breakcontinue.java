

import java.util.Scanner;
class breakContinue{
public static void main(String[]  args){
System.out.println("print number skip 3 and break at n-2");
Scanner input = new Scanner(System.in);
System.out.print("Enter the number  n :");
int n = input.nextInt();
for(int i = 1 ; i <= n ; i++){
if(i == 3){
continue;
}
if(i > n-2){ 
break;
}
System.out.print(i + " ");
} 
}
}