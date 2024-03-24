#include <iostream>
#include <string>
using namespace std;

class BankAccount { //은행계좌
private: 
	int accountNumber; //계좌번호
	string owner; //예금주
	int balance; //잔액 표시
public:
	void setOwner(string owner);
	void setBalance(int amount); //get리턴시키기, set 값을줘서 변화 함수
	int getBalance();
	void deposit(int amount); //저금
	void withdraw(int amount); // 인출
	void print();
};

void BankAccount::setOwner(string owner1) {
	owner = owner1;
}

void BankAccount::setBalance(int amount) {
	balance = amount;
}

int BankAccount::getBalance() {
	return balance;
}

void BankAccount::deposit(int amount) {
	balance += amount;
}

void BankAccount::withdraw(int amount) {
	if (balance <= 0) {
		cout << "잔액이 부족합니다." << endl; exit(0); //exit(0)으로 종료
	}
	balance -= amount;
}

void BankAccount::print() {
	cout << owner << "의 잔액은 " << getBalance() << "입니다." << endl;
}

int main() {
	BankAccount account;
	account.setOwner("김철수");
	account.setBalance(0);
	account.deposit(10000);
	account.print();
	account.withdraw(8000);
	account.print();
	return 0;
}