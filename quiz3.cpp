#include <iostream>
#include <string>
using namespace std;

class BankAccount { //�������
private: 
	int accountNumber; //���¹�ȣ
	string owner; //������
	int balance; //�ܾ� ǥ��
public:
	void setOwner(string owner);
	void setBalance(int amount); //get���Ͻ�Ű��, set �����༭ ��ȭ �Լ�
	int getBalance();
	void deposit(int amount); //����
	void withdraw(int amount); // ����
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
		cout << "�ܾ��� �����մϴ�." << endl; exit(0); //exit(0)���� ����
	}
	balance -= amount;
}

void BankAccount::print() {
	cout << owner << "�� �ܾ��� " << getBalance() << "�Դϴ�." << endl;
}

int main() {
	BankAccount account;
	account.setOwner("��ö��");
	account.setBalance(0);
	account.deposit(10000);
	account.print();
	account.withdraw(8000);
	account.print();
	return 0;
}