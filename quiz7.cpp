#include <iostream>
using namespace std;
class Oval {
	int width, height;
	double getArea();
public:
	Oval() { width = height = 1; }
	Oval(int w, int h) { width = w; height = h; }
	~Oval() { cout << "Oval �Ҹ� : "; show(); }
	int getWidth() { return width; }
	int getHeight() { return height; }
	void set(int w, int h);
	void show();
};

//class �ۿ��� �����ϳ� ���ϳ� �Ȱ���(���������-> �ζ����Լ�?)
// ��ǻ�Ϳ����� ���̰� ���� -> �����ð��� ���ϴ�

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
	//a.getArea�� ����� �ȵ�... class �������� ���
}