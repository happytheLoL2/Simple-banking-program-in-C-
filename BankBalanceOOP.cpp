#include <iostream>
#include <string>


using namespace std;

class BankAccount{
private:
	double balance;
	string ownerName;

public:
	BankAccount(string name, double initialBalance){
		ownerName = name;
		balance = initialBalance;
	}
	
void showBalance(){
	cout << ownerName << "'s balance is: " << balance << endl;
}

double deposit(){
	double amount;
	cout << "Amount to deposit(Max 500): ";
	cin >> amount;
	 if(amount >=1 && amount <=500){
		cout << "Transaction complete!" << endl;
		return amount;
	 }
	 else{
		cout << "Please write a number between 1-500!" << endl;
		return 0;
	 }
	
}

double withdraw(){
	double amount;
	cout << "Amount to withdraw: ";
	cin >> amount;
		if(amount < balance){
			cout << "Transaction complete!" << endl;
			return amount;
		}
		else{
			cout << "Insufficient funds!" << endl;
			return 0;
		}
}
};

void showBalance();
double deposit();
double withdraw();

int main() {
	
	BankAccount myAccount("Megyesi Antonia", 200.0);
	int choice = 0;
	
	do{
		cout << "********************" << endl;
		cout << "Enter your choice: " << endl;
		cout << "1. Show balance" << endl;
		cout << "2. Deposit money" << endl;
		cout << "3. Withdraw money" << endl;
		cout << "4. Exit" << endl;
		cout << "********************" << endl;
		cin >> choice;
		
		switch(choice){
			case 1: 
			     myAccount.showBalance();
			    break;
			case 2:  
			     myAccount.deposit();
				break;
			case 3: 
		          myAccount.withdraw();
				break;
			case 4: 
			      cout << "Exit done" << endl;
			    break;
			default:
				cout << "Wrong input" << endl;
				break;
		}
	}while(choice != 4);
	
	return 0;
}


