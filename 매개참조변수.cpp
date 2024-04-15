#include <iostream>
using namespace std;
void addConst(int& x, int y) {
	x = x + 200; //main의 a와 공유
	y = y + 200; //b값을 그대로 카피시킴
	cout << "addConst함수에서 x, y를 출력한다. " << endl;
	cout << "&x =   " << &x << "  x =    " << x << endl;
	cout << "&y =   " << &y << "  y =    " << y << endl;
}

int main() {
	int a = 100; int b = 10;
	addConst(a, b);
	cout << "main 함수에서 a, b를 출력한다. " << endl;
	
	cout << "&a =   " << &a << "  a=    " << a << endl;
	cout << "&b =   " << &b << "  b=    " << b << endl;

}