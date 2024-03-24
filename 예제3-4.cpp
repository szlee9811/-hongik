#include <iostream> //is 같냐 다르냐 true or false 대소문자 구별
using namespace std;

class Rectangle {
private:
	int r1;
	int r2;

public:
	Rectangle() {
		r1 = r2 = 1;
	}

	Rectangle(int a) {
		r1 = r2 = a;
	}

	Rectangle(int b, int c) {
		r1 = b; r2 = c;
	}

	bool isSquare() {
		if (r1 == r2) return true;
		else return false;
	}
};

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}