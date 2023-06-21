#include<iostream>
#include<string>
using namespace std;
int password, phone;
double salary;
string email, name;
void login();
void sign();
void number_operation();
void show_data();
void salary_pull();
void salary_deposit();
void change_password();
void choose() {
	cin.exceptions(cin.failbit);
	while (true) {
		try {
			string  number_operation;
			cout << "please choose your operation:\n";
			cout << "1- login\n";
			cout << "2- sign \n";
			cin >> number_operation;
			int num;
			if (num = stoi(number_operation) < 0)	throw num;
			if (num = stoi(number_operation) > 2)	throw num;
			if (num = stoi(number_operation) == 1)login();
			else if (num = stoi(number_operation) == 2) sign();
			else {
				throw "error!\n";
			}
		}
		catch (exception) {
			cout << "Wrong! please try again\n";
		}
		catch (int i)
		{
			cout << "Number operation " << i << "is out of range\n";
			choose();
		}
	}
}
int main() {
	choose();
	return 0;
}
void sign() {

	int sure_operation;
	cout << "Welcome to sign up\n";
	cout << "Enter Name :";
	cin >> name;
	cout << "Enter Email :";
	cin >> email;
	cout << "Enter Phone Number :";
	cin >> phone;
	cout << "Enter your password :";
	cin >> password;
	cout << "please Enter on 1 to Sure the Information ";
	cin >> sure_operation;
	if (sure_operation == 1)
	{
		cout << "Welcome\n" << "Your data is \n";
		cout << "Name:" << name << endl;
		cout << "email:" << email << endl;
		cout << "Phone:" << phone << endl;
		cout << "Password:" << password << endl;
		cout << "...................................." << endl;
		cout << "Enter the amount you want to deposit into your account :";
		cin >> salary;
		cout << "We go to login up your account" << endl;
		login();
	}
	else
	{
		cout << "Error please try again to create your account and sure that \n";
		void sign();
	}
}
void login() {
	int password1;
	string mail;
	cout << "Welcome to login up\n";
	cout << "Enter Email:";
	cin >> mail;
	cout << "Enter password:";
	cin >> password1;
	if (mail == email && password1 == password)
	{
		cout << "Welcome to the main page\n";
		cout << "1-pull\n";
		cout << "2-deposit\n";
		cout << "3-change password\n";
		cout << "4-show data\n";
		cout << "Enter the operation number you want to perform:";
		number_operation();
	}
	else if (mail == email || password1 == password)
	{
		cout << "You must check the email or password,there is an error in one of them\n";
		login();
	}
	else
	{
		cout << "Error!\n";
		cout << "Welcome please enter data to create an account" << endl;
		sign();
	}
}
void salary_pull() {
	int salary_p;
	cout << "Enter the Salary to pull:";
	cin >> salary_p;
	if (salary_p <= salary && salary_p > 0)
	{
		salary -= salary_p;
		cout << "The Operation Succeded and your Remaining money :" << salary;
	}
	else
	{
		cout << "Your money is not enough and there is an amount in your account :" << salary << endl;
		salary_pull();
	}
}
void change_password() {
	int password_to_change, password_old;
	cout << "To Change the password , Enter the old password:";
	cin >> password_old;
	if (password_old == password)
	{
		cout << "The password true\n";
		cout << "Enter the new password:";
		cin >> password_to_change;
		password = password_to_change;
		cout << "The new password:" << password;
	}
	else
	{
		cout << "The password is wrong";
		change_password();
	}
}
void salary_deposit() {
	int salary_d;
	int press;
	cout << "Enter the money you want to deposit:";
	cin >> salary_d;
	salary += salary_d;
	cout << "There is now an amount of money in the account:" << salary << endl;
	cout << "To withdraw an amount of money,press 1";
	cin >> press;
	if (press == 1)
	{
		salary_pull;
	}
	else
	{
		cout << "Please try again" << endl;
		salary_deposit();
	}
}
void number_operation() {
	int number_operat;
	cin >> number_operat;
	if (number_operat == 1)
	{
		salary_pull();
	}
	else if (number_operat == 2)
	{
		salary_deposit();
	}
	else if (number_operat == 3)
	{
		change_password();
	}
	else if (number_operat == 4)
	{
		show_data();
	}
	else
	{
		cout << "Error! Enter number operation of the avilable operations:";
		number_operation();
	}
}
void show_data() {
	cout << "Name:" << name << endl;
	cout << "email:" << email << endl;
	cout << "Phone:" << phone << endl;
	cout << "Password:" << password << endl;
}