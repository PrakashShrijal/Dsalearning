#include<iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    std::string name;
    std::string accountNumber;
    std::string accountType;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(std::string name, std::string accountNumber, std::string accountType, double balance) {
        this->name = name;
        this->accountNumber = accountNumber;
        this->accountType = accountType;
        this->balance = balance;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited rupees :"<<" " << amount <<std ::endl;
            std::cout<< ". New balance: rupee :"<<" " << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (0 < amount && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew money :"<<" " << amount << std::endl;
            std::cout <<" New balance: Rupee :"<<" " << balance << std::endl;
        } else {
            std::cout << "Insufficient funds or invalid withdrawal amount." << std::endl;
        }
    }

    // Display account information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: Rupee" << balance << std::endl;
    }
};

int main() {
    // Create a BankAccount object
    char name,savings;
    int n,bal;
    
    cin>>n>>bal;

    BankAccount account("prakash shrijal", "58301011009983", "Savings", 1000.0);
    account.displayInfo();

    // Deposit money
    account.deposit(5000.0);

    // Withdraw money
    account.withdraw(2000.0);

    // Display updated account information
    account.displayInfo();

    return 0;
}
