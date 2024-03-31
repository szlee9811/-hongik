#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}
//����� �����ϱ� ������ �߰��� �����ϱ⵵ ��

int main() {
	int radius;
	while (true) {
		cout << "���� ������ �Է�(�����̸� ����)>> ";
		cin >> radius;
		if (radius < 0) break; //������ �ԷµǾ� �����Ѵ�.
		Circle* p = new Circle(radius); //���� ��ü ���� , ���� �޸𸮴� �ݵ�� ����Ʈ�� ����Ѵ�.
		cout << "���� ������ " << p->getArea() << endl;
		delete p; //��ü ��ȯ, delete���� ���ٸ� �޸� ���� �߻�
	}
}