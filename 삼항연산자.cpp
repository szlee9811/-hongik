#include <iostream>
using namespace std;

int main() {
	int num, abs;
	cout << "정수 입력 : ";
	cin >> num;

	abs = num > 0 ? num : -1 * num;
	cout << "절댓값 : " << abs << endl;
}