#include <iostream>
using namespace std;

namespace Graphic {
	int maximum = 100; //반지름의 최대값
}

namespace Math {
	int maximum = 65536; // 정수의 최대값
	int add(int a, int b) { return a + b; }
	int sub(int a, int b) { return a - b; }

}

int main() {
	cout << "Radius Maximum = " << Graphic::maximum << endl;
	cout << "Integer Maximum = " << Math::maximum << endl;
	cout << "Integer add = " << Math::add(2, 4) << endl;
}