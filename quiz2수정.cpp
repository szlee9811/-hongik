#include <iostream>
#include <string>
using namespace std;

//�Լ� �ۿ��� ����� ���� ���� ����
//main �ۿ��� ����� ��ü ���� ��ü
//���� ������ ���� ����ϴ°� ���� ���α׷��� �ƴ�
class Car {
private: //��� ���� ����, ������ private�� �ν�
	int speed; //�ӵ�
	string color; //����

public:
	void setSpeed(int speed) { this->speed = speed; }
	void setColor(string color) {this->color = color;}
	//��� �Լ� ����
	void speedUp() { speed += 10; }
	void speedDown() {speed -= 10; }
	void printCar() {
		cout << "���� ���� ������ " << color;
		cout << "\t���� ���� �ӵ��� " << speed << endl; //\t�� �� 
	}

};
Car globalCar; //���� ��ü

int main() {
	Car localCar; //���� ��ä
	globalCar.setColor("white"); globalCar.setSpeed(100);
	globalCar.speedUp(); globalCar.printCar();


	//localColor.speed = 20 ���� private�̶� ������ ��
	localCar.setColor("red"); localCar.setSpeed(200);
	localCar.speedDown(); localCar.printCar();
	return 0;
}