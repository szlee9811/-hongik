#include <iostream>
using namespace std;

int main() {
	int* a = new int(3);
	int* b = new int(5);
	cout << "a�� �ּ�(������) : " << a << endl;
	cout << "b�� �ּ�(������) : " << b << endl;

	a = b;
	*b = 10;

	cout << "a������" << a << endl;
	cout << "b������" << b << endl;

	cout << "a��" << *a << endl;
	cout << "b��" << *b << endl;

	delete a;
	delete b;
}