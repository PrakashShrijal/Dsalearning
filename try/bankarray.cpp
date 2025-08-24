#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string name;         // Account holder's name
    int accountNumber;   // Account number
    string accountType;  // Type of account (e.g., Savings, Checking)
    float balance;      // Balance amount

public:
    // Function to assign initial values
    void assignInitialValues(string accName, int accNumber, string accType, double initialBalance) {
        name = accName;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit amount into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount <<"   "<< "successful"<< endl;
        } else {
            cout << "Error,Cannot deposit" << endl;
        }
    }

    // Function to withdraw amount from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount <<"  "<<"successful"<< endl;
        } else {
            cout << "insufficient funds for withdrawal." << endl;
        }
    }

    // Function to display account details
    void display(){
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    int numRegister;
    cout << "Enter the number of accounts to register: ";
    cin >> numRegister;

    // Array to hold multiple bank accounts
    BankAccount accounts[numRegister];

    // Initialize each account
    
    for (int i = 0; i < numRegister; i++) {
        string name;
        string accountType;
        double accountNumber;
       

        cout << "Enter details for account " << i + 1 << ":" <<endl;
        cout << "Name: ";
        cin>>name;
        
        cout << "Account Number: ";
        cin >> accountNumber;
      
        cout << "Account Type : ";
        cin>>accountType;
        
        accounts[i].assignInitialValues(name, accountNumber, accountType, 1000);
        
    }
    cout << "\nAll Account Details:\n";
    for (int i = 0; i < numAccounts; ++i) {
        cout << "\nAccount " << i + 1 << ":\n";
        accounts[i].display();
    }
    for (int i = 0; i < numAccounts; ++i) {
        cout << "\nAccount " << i + 1 << " operations:\n";

     // Deposit
        float depositAmount;
        cout << "Enter deposit amount : ";
        cin >> depositAmount;
        accounts[i].deposit(depositAmount);
        cout<<endl;
        // Withdraw
        float withdrawAmount;
        cout << "Enter withdrawal amount : ";
        cin >> withdrawAmount;
        accounts[i].withdraw(withdrawAmount); 
        
        // Display updated details
        accounts[i].display();
    }
    
      

    return 0;
}