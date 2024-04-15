#include <iostream>
using namespace std;

char c = 'a';
char& find() {
	return c;
}

int main() {
	char& ref = find();
	ref = 'M';
	cout << "c= " << c << " ref = " << ref << endl;

	char ch = find();
	cout << "ch = " << ch << endl;

	find() = 'b';
	cout << "c = " << c << " ref = " << ref << endl;
}