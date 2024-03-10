#include <iostream>
	using namespace std;

int main() {
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2 >12);
	result3 = (!num1);

	cout << "result1: " << result1 << endl;
	cout << "result2: " << result2 << endl;
	cout << "result3: " << result3 << endl;

}