#include <iostream>
using namespace std;

int main() {
	int num, abs;
	cout << "���� �Է� : ";
	cin >> num;

	abs = num > 0 ? num : -1 * num;
	cout << "���� : " << abs << endl;
}