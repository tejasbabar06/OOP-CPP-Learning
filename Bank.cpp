/*Create a class Bank Account with private attributes account Number
and balance.Implement public methods deposit(),withdraw(),and getBalance()
to manage the account*/

#include<iostream>
using namespace std;

class Bank_acc{
	private:
		int acc_num;
		float balance=0;
		
		public:
			void set_acc();
			void deposit_amount();
			void withdraw_amount();
			void get_bal();
};

	void Bank_acc::set_acc(){
				cout<<"Entre your account number :"<<endl;
				cin>>acc_num;
			}
			
			void Bank_acc::deposit_amount(){
				int deposit;
				cout<<"Entre the amount to be deposited : "<<endl;
				cin>>deposit;
				balance = balance+deposit;
				cout << "Updated balance: " << balance << endl;
			}
			
			void Bank_acc::withdraw_amount(){
				int withdraw;
				cout<<"Entre the amount to be withdraw"<<endl;
				cin>>withdraw;
				if(balance < withdraw){
					cout<<"Insufficient Funds "<<endl;
				}
				else{
					balance -= withdraw;
				}
			}
			
				
			void Bank_acc::get_bal(){
				cout<<"Your balance is : "<<balance<<endl;
			}
			

int main(){
	Bank_acc account;
	int choice;
	while(true){
	cout<<"Choice 1 : Set Account Number"<<endl;
	cout<<"Choice 2 : Deposit"<<endl;
	cout<<"Choice 3 : Withdraw"<<endl;
	cout<<"Choice 4 : Check Bank Balance"<<endl;
	cout<<"Choice 5 : Exit"<<endl;
	cout<<"Entre your choice : "<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			account.set_acc();
			break;
		case 2:
			account.deposit_amount();
			break;
		case 3:
			account.withdraw_amount();
			break;
		case 4:
			account.get_bal();
			break;
		case 5:
			cout << "Thank you for using our service.\n";
            return 0;
		default:
			cout<<"Invalid Operation"<<endl;
	}
}
}
