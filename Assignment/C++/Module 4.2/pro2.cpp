/*
Define a class to represent a bank account. Include the following members: 
1. Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account
2. Member Functions 
-To assign values 
-To deposited an amount 
-To withdraw an amount after checking balance 
-To display name and balance
*/
#include <iostream>
#include <string>
using namespace std;
class BankAccount 
{
    private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;
    public:
    // constructor
    BankAccount(string name, int number, string type, double initialBalance) 
    {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }
    // assign values
    void assignValues(string name, int number, string type, double initialBalance) 
    {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }
    // deposit an amount
    void deposit(double amount) 
    {
        balance += amount;
    }        
    // withdraw an amount after checking balance
    bool withdraw(double amount) 
    {
        if (amount > balance)
        {
            cout<<"Insufficient balance.\n";
            return false;
        }
        else 
        {
            balance -= amount;
            return true;
        }
    }        
    // display name and balance
    void display() 
    {
        cout<<"Depositor Name: "<<depositorName<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Type: "<<accountType<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main() 
{
    // create a bank account object
    BankAccount myAccount("Kirtan", 12345, "Savings", 10000);    
    
    // display initial balance
    myAccount.display();
    
    // deposit an amount
    myAccount.deposit(5000);
    
    // display updated balance
    myAccount.display();
    
    // withdraw an amount
    myAccount.withdraw(2000);
    
    // display updated balance
    myAccount.display();
    
    // try to withdraw an amount greater than balance
    myAccount.withdraw(20000);
    return 0;
}