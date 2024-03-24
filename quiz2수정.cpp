#include <iostream>
#include <string>
using namespace std;

//함수 밖에서 선언된 변수 전역 변수
//main 밖에서 선언된 객체 전역 객체
//전역 변수를 많이 사용하는건 좋은 프로그램이 아님
class Car {
private: //멤버 변수 선언, 지워도 private로 인식
	int speed; //속도
	string color; //색상

public:
	void setSpeed(int speed) { this->speed = speed; }
	void setColor(string color) {this->color = color;}
	//멤버 함수 선언
	void speedUp() { speed += 10; }
	void speedDown() {speed -= 10; }
	void printCar() {
		cout << "현재 차의 색상은 " << color;
		cout << "\t현재 차의 속도는 " << speed << endl; //\t가 탭 
	}

};
Car globalCar; //전역 객체

int main() {
	Car localCar; //지역 격채
	globalCar.setColor("white"); globalCar.setSpeed(100);
	globalCar.speedUp(); globalCar.printCar();


	//localColor.speed = 20 쓰면 private이라 오류가 뜸
	localCar.setColor("red"); localCar.setSpeed(200);
	localCar.speedDown(); localCar.printCar();
	return 0;
}