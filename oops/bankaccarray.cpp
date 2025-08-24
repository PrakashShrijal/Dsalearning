//try this once again

#include<iostream>
using namespace std;
class Bankaccount{
    char name;
    char accountType;
    double accountNumber;
    float balance;
    public:
    void openingValue(char accName, char accType,double accNumber,float bal){
        name = accName;
        accountType = accType;
        accountNumber = accNumber;
        balance = bal;
    }
    void deposit(float amount){
        if (amount > 0)
        {
            balance +=amount;
            cout<<"Amount deposited, Thankyou!"<<endl;
        }else
        {
            cout<<"error, cannot deposit!"<<endl;
        }
        
    }
    void withdraw(float amount){
        if (balance >= amount)
        {
            balance -= amount;
            cout<<"withdrawl is successful, thankyou!"<<endl;
        }else
        {
            cout<<"Insufficient Balance"<<endl;
        }
        
        
    }
    void diplaydetail(){
        cout<<"Account Holder Name :"<<name<<endl;
        cout<<"Account Type :"<<accountType<<endl;
        cout<<"Account Number :"<<accountNumber<<endl;
        cout<<"Account Balance :"<<balance<<endl;
    }

};
int main()
{ double acc_Num[3] = { 564383, 352738,638262};
    Bankaccount acc1;
    acc1.name = 'Ram';
    acc1.accountType = 'saving';
    acc1.balance = 1000;
    acc1.accountNumber = acc_Num[0];

     Bankaccount acc2;
    acc2.name = 'Rm';
    acc2.accountType = 'saving';
    acc2.balance = 1020;
    acc2.accountNumber = acc_Num[1];

    Bankaccount acc3;
    acc3.name = 'R';
    acc3.accountType = 'saving';
    acc3.balance = 1060;
    acc3.accountNumber = acc_Num[3];

    displaydetail();







return 0;
}