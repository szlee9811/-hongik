#include <iostream>
using namespace std;

int main()
{
	int a = 5, b = 10, c;
	cout << "a+b/3*3   --> " << (a + b / 3 * 3) << endl;
	cout << "b << 2    --> " << (b << 2) << endl;
	cout << "a != b    --> " << (a != b) << endl;
	cout << " b % a    --> " << (b % a) << endl;
	cout << "(a>b)?a:b --> " << ((a > b) ? a : b) << endl;
	cout << "sizeof(a) --> " << (sizeof(a)) << endl;
	cout << "c = a++   --> " << (c = a++) << endl;
	cout << "a += b    --> " << (a += b) << endl;
	cout << "a & b     --> " << (a & b) << endl;
	cout << "c=(a+b, a-b) --> " << (c = (a + b, a - b)) << endl;

}