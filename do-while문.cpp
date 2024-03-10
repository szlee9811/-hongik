#include <iostream>
using namespace std;

int main() {
	int total = 0, num = 0;

	do {
		cout << "정수 입력(0 to quit) : ";
		cin >> num;
		total += num;
	} while (num != 0);

	cout << "합계 : " << total << endl;

	return 0;
}