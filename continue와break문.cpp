#include <iostream>
using namespace std;

int main() {
	int a;
	while (true) {
		cout << "���� �Է�>>";
		cin >> a;

		if (a == 0)
			break;
		if (a % 3 != 0) {
			cout << "No" << "\n";
			continue;
		}
		cout << "Yes" << "\n";
	}
}