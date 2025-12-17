
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
paymentSystem Customer = new paymentSystem();


Customer.sendMoney(9110175);
Customer.sendMoney("9110175810@upi");
Customer.sendMoney(175810 ,"SBIN418369");


}
}
