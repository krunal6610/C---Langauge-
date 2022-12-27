/*

Define a class to represent a bank account. Include the following members: Data Member: -

Name of the depositor - Account Number - Type of Account - Balance amount in the 

account Member Functions - To assign values - To deposited an amount - To withdraw an 
amount after checking balance - To display name and balance.

*/

#include <iostream>

using namespace std;

class Bank
{

  public:string name;
  int acc_num;
  string acc_type;
  int d_amount, w_amount, balance;


  void getData (string n, int num, string type, int b)
  {

    name = n;
    acc_num = num;
    acc_type = type;
    balance = b;


  }

  void deposit_ammount ()
  {


    cout << "------Deposit Ammount------" << "\n\n";
    //cout<<"Available balance is: "<<balance<<endl;
    cout << "Enter Amount to deposit: ";
    cin >> d_amount;

    if (d_amount > 0)
      {

	balance = balance + d_amount;
	cout << "New Available balance is: " << balance << endl << endl;

      }
    else
      {

	cout << "Enter valid Amount" << endl << endl;

      }



  }

  void withdraw_ammount ()
  {


    cout << "------Withdraw Ammount------" << "\n\n";

    cout << "Enter Amount to withdraw: ";
    cin >> w_amount;

    if (w_amount <= balance)
      {

	balance = balance - w_amount;
	cout << "New Available balance is: " << balance << endl << endl;

      }
    else
      {

	cout << "insufficient balance" << endl << endl;
      }


  }

  void display_name_balance ()
  {

    cout << "------Account Imfo------" << "\n\n";

    cout << "Name: " << name << endl;
    cout << "Acc Num: " << acc_num << endl;
    cout << "Acc Type: " << acc_type << endl;
    cout << "Balance: " << balance << endl << endl;


  }




};





int
main ()
{
  int choice;
  string flag = "no";
  Bank bank;
  bank.getData ("krunal", 3366, "Saving", 200);
  bank.display_name_balance ();

  do
    {

      cout << "Enter 1 For Deposit Amount" << endl;
      cout << "Enter 2 For withdraw Amount" << endl;
      cin >> choice;
      cout << endl;

      if (choice == 1)
	{

	  bank.deposit_ammount ();

	}
      else if (choice == 2)
	{

	  bank.withdraw_ammount ();

	}
      else
	{

	  cout << "enter valid choice" << endl;

	}

      cout << "enter [yes] for continue & [no] for dis continue" << endl;
      cout << "do you continue: ";
      cin >> flag;
      cout << endl;

    }
  while (flag == "yes");

  cout << endl << "Thank you for using bank application ";

  return 0;
}
