#include <iostream>
using namespace std;
class Oval {
	int width, height;
	double getArea();
public:
	Oval() { width = height = 1; }
	Oval(int w, int h) { width = w; height = h; }
	~Oval() { cout << "Oval 소멸 : "; show(); }
	int getWidth() { return width; }
	int getHeight() { return height; }
	void set(int w, int h);
	void show();
};

//class 밖에서 선언하나 안하나 똑같음(사용자입장-> 인라인함수?)
// 컴퓨터에서는 차이가 있음 -> 다음시간에 배웁니다

double Oval::getArea() {
	return 3.14 * width * height;
}

void Oval::set(int w, int h) {
	width = w; height = h;
}

void Oval::show() {
		cout << "width = " << width << ", height = " << height << "  Area = " << getArea() << endl;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show(); b.show();
	//a.getArea는 사용이 안됨... class 내에서만 사용
}