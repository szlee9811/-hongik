#include <iostream>
using namespace std;
int& addConst(int& x, int y) {
	x = x + 200; //main�� a�� ����
	y = y + 200; //b���� �״�� ī�ǽ�Ŵ
	cout << "addConst�Լ����� x, y�� ����Ѵ�. " << endl;
	cout << "&x =   " << &x << "  x =    " << x << endl;
	cout << "&y =   " << &y << "  y =    " << y << endl;
	return x;
}

int main() {
	int a = 100; int b = 10;
	addConst(a, b) = 555; //�Լ��̸� ��ü�� ���ʿ� ����
	cout << "main �Լ����� addConst(a, b) = 555�� �� a, b, c " << endl;

	cout << "&a =   " << &a << "  a=    " << a << endl;
	cout << "&b =   " << &b << "  b=    " << b << endl;

}