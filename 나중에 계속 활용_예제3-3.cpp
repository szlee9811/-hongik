#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); //매개 변수 없는 생성자
	Circle(int r); //매개 변수 있는 생성자
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // 매개 변수 없는 생성자 호출 / donut()으로 하면 오류가 뜸
	//초기값을 집어넣지 않을 때에는 ()을 없이 해야한다 외워야해
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); // 매개 변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

}