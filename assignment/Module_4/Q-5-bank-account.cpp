/*Define a class to represent a bank account. Include the following members: 
1. Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account 
2. Member Functions 
-To assign values 
-To deposited an amount 
-To withdraw an amount after checking balance 
-To display name and balance */

#include <iostream>
#include <string>
int balance;
using namespace std;

class AccountOpening 
{
public:
    int accountNumber;
    string accountType;
    string holderName;

    void agetData()
	 {
        cout<<"Enter Account Number: ";
        cin>>accountNumber;

        cout<<"Enter Account Type (saving or current): ";
        cin>>accountType;

        cout<<"Enter Holder Name: ";
        cin>>holderName;
    }
};

class Deposit
{
public:
    int depositAmount;

    void dgetData() 
	{
		do
		{
	    cout<<"Deposit a minimum amount (min: 2000): ";
        cin>>depositAmount;

        if (depositAmount < 2000)
		 {
            cout<<"Please deposit at least 2000.\n"; 
		}
           
		} while (depositAmount<2000);
      
    
        balance+=depositAmount;
        cout << "\nBalance is:"<<balance<<"\n";
        
    }
        
    
};

class Withdrawal
{
public:
    int withdrawalAmount;
    void wgetData() 
	{
        cout<<"Enter Withdrawal Amount: ";
        cin>>withdrawalAmount;
        
        balance -= withdrawalAmount;
        cout << "\nBalance is: "<<balance;
    }
};

class Statement : public AccountOpening, public Deposit, public Withdrawal 
{
public:
    void printData() {
        cout<<"\nAccount Number: "<<accountNumber;
        cout<<"\nAccount Type: "<<accountType;
        cout<<"\nAccount Holder Name: "<<holderName;
        cout<<"\nDeposit Amount: "<<depositAmount;
        cout<<"\nWithdrawal Amount: "<<withdrawalAmount;
        cout << "\nBalance is: " << balance;
       
    }
};
main() {
    Statement st;
    st.agetData(); 
    st.dgetData(); 
    st.wgetData(); 
    st.printData(); 
    
}
