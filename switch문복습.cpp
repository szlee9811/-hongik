#include <iostream>
using namespace std;

int main() {
	char sel;
	cout << "M ����, A ����, E ����" << endl;
	cout << "�Է� : ";
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
		break; //��� ���ʿ��� break��!
	}
}