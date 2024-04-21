#include <iostream>
using namespace std;

class Person {
public:
	double money; // 개인 소유의 돈
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedmoney; //공금
	static void addShared(int n) {
		sharedmoney += n;
	}
};

//static 변수 생성, 전역 공간에 생성
int Person::sharedmoney = 10;
//클래스 밖에서 선언해줘야함 요거는 꼭 해줘야함

//main함수
int main() {
	Person han;
	han.money = 100; //han의 돈 =100, 별도의 메모리
	han.sharedmoney = 200;

	Person lee;
	lee.money = 150;
	lee.addMoney(200);
	Person::addShared(200); // lee.addShared(200); 과 같음

	cout << han.money << ' ' << lee.money << endl;
	cout << han.sharedmoney << ' ' << lee.sharedmoney << endl;
}