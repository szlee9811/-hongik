#include <iostream>
using namespace std;

class Person {
public:
	double money; // ���� ������ ��
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedmoney; //����
	static void addShared(int n) {
		sharedmoney += n;
	}
};

//static ���� ����, ���� ������ ����
int Person::sharedmoney = 10;
//Ŭ���� �ۿ��� ����������� ��Ŵ� �� �������

//main�Լ�
int main() {
	Person han;
	han.money = 100; //han�� �� =100, ������ �޸�
	han.sharedmoney = 200;

	Person lee;
	lee.money = 150;
	lee.addMoney(200);
	Person::addShared(200); // lee.addShared(200); �� ����

	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedmoney << ' ' << lee.sharedmoney << endl;
}