#include <iostream>
using namespace std;

int main() {
	int total = 0, num = 0;

	do {
		cout << "���� �Է�(0 to quit) : ";
		cin >> num;
		total += num;
	} while (num != 0);

	cout << "�հ� : " << total << endl;

	return 0;
}