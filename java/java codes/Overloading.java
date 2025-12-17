 import java.util.Scanner;
class paymentSystem{
void sendMoney(int number){
System.out.println("Money is transferred  Account to Linked to Number  :" + number);
}

void sendMoney(String UPI){
System.out.println("Money is transferred  Account to Linked to UPI  :" + UPI);
}

void sendMoney(int Accnumber ,String IFSC){
System.out.println("Money is transferred  Account with IFSC  :" + Accnumber +" " + IFSC);
}
}
class Overloading{
public static void main(String[]  args){
Scanner input = new Scanner(System.in); 
paymentSystem Customer = new paymentSystem();

 System.out.println("Enter the Choice of Payment :");
System.out.println("1. Using Mobile Number");
System.out.println("2.Using UPI");
System.out.println("3.Using Account and IFSC");
int choice = input.nextInt();
input.nextLine();

switch(choice){

case 1:
System.out.println("Enter the Mobile Number");
int number = input.nextInt();
Customer.sendMoney(number);
break;

case 2:
System.out.println("Enter the UPI");
String upi = input.nextLine();
Customer.sendMoney(upi);
break;

case 3:
System.out.println("Enter the AccountNumber and IFSC");
int accnum = input.nextInt();
String IFSC = input.nextLine();
Customer.sendMoney(accnum,IFSC); 
break;

default:
System.out.println("Invalid choice, can't process Transaction! ");

}
}
}