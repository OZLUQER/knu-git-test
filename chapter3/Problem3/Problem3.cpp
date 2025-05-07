#include<iostream>
using namespace std;

class Account {
public:
	Account(string a, int b, int c);
	string owner;
	int id, balance;
	void deposit(int m);
	string getOwner();
	int inquiry();
	int withdraw(int m);
};

Account::Account(string a, int b, int c) {
	owner = a;
	id = b;
	balance = c;
}

void Account::deposit(int m) {
	balance += m;
}

string Account::getOwner() {
	return owner;
}

int Account::inquiry() {
	return balance;
}

int Account::withdraw(int m) {
	balance -= m;
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}