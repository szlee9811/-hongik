#include <iostream>
using namespace std;

int big(int a, int b) {
	int big;
	if (a > b) big = a;
	else big = b;
	if (big > 100) return 100;
	else return big;
}

int big(int a, int b, int c) {
	int m = (a > b) ? a : b;
	return (m > c) ? c : m;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << " x = " << x << ' ' << "y = " << y << ' ' << "z = " << z << endl;
}
