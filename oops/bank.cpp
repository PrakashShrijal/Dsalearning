#include<iostream>
#include<string>
using namespace std;

class BankAccount{
private:
    string name;
    int accountNumber;
    string accountType;
    double balance;

public:
void assignInitialValue(string accName,int accNumber, string accType, double balAmt)
{
    name = accName;
    accountNumber = accNumber;
    accountType = accType;
    balance = balAmt;
}
void deposit(double amount){
    if(amount > 0){
        balance +=amount;
        cout<<"Amount depoisted Successfully!"<<endl;
    }else{
        cout<<"Invalid depoit amount!"<<endl;
    }
}
void withdrawl(double amount){
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout<<"Amount  withdrawl successfully !"<<endl;
    }else
    {
        cout<<"Invalid withdrawl amount"<<endl;
    }
}
void printAccountDeatil(){
    cout<<"Account Holder Name: "<< name <<endl;
    cout<<"Account Number: "<< accountNumber <<endl;
    cout<<"Account Type: "<< accountType <<endl;
    cout<<"Balance Amount: rupees :"<< balance << endl;
}
};

int main()
{BankAccount account;
string name;
double accountnumber;
string accountType;

cout<<"Enter the account holder's Name: ";
getline(cin,name);

cout<<"Enter the account Number: ";
cin>> accountnumber;

cout<<"Enter the account Type: ";
cin>> accountType;


account.assignInitialValue(name,accountnumber,accountType,2000);
account.printAccountDeatil();

double depositAmount;
cout<<"\nEnter Amount to deposit: ";
cin>> depositAmount;
account.deposit(depositAmount);

account.printAccountDeatil();

double withdrawlAmount;
cout<<"\nEnter Amount to Withdrawl: ";
cin>> withdrawlAmount;
account.withdrawl(withdrawlAmount);

account.printAccountDeatil();



return 0;
}
  