#include <iostream>
using namespace std;

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
	cout << "����� �ߵ˴ϴ�." << endl;

}

int main() {
	int a = 2;
	int b = 3;
	cout << "a : " << a << " b : " << b << endl;
	swap(&a, &b);
	cout << "a : " << a << " b : " << b << endl;
	return 0;
}