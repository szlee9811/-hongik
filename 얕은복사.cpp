#include <iostream>
using namespace std;

int main() {
	int* a = new int(3);
	int* b = new int(5);
	cout << "a의 주소(복사전) : " << a << endl;
	cout << "b의 주소(복사전) : " << b << endl;

	a = b;
	*b = 10;

	cout << "a복사후" << a << endl;
	cout << "b복사후" << b << endl;

	cout << "a값" << *a << endl;
	cout << "b값" << *b << endl;

	delete a;
	delete b;
}