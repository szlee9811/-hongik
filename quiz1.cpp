#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	void setxy(int a, int b) { x = a; y = b; }
	void print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
	Point p1;
	p1.setxy(3, 4);
	p1.print();
	return 0;
}