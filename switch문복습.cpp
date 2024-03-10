#include <iostream>
using namespace std;

int main() {
	char sel;
	cout << "M 오전, A 오후, E 저녁" << endl;
	cout << "입력 : ";
	cin >> sel;

	switch (sel)
	{
	case 'M' : case 'm':
		cout << "Morning" << endl;
		break;
	case 'A': case 'a':
		cout << "Afternoon" << endl;
		break;
	case 'E': case 'e':
		cout << "Evening" << endl;
		break; //사실 불필요한 break문!
	}
}