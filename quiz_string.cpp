#include <iostream>
#include <string>
using namespace std;

//str.size() �� str.length()�� ���� �� ��Ʈ���� ����!! �ܿ���

int main() {
	string str;
	cout << "���ڿ� �Է�>>";

	getline(cin, str);
	int len = str.size();
	for (int i = 1; i <= len; i++) {
		for (int j = 0; j < i; j++)
			cout << str[j];
		cout << endl;
	}
}