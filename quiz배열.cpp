#include <iostream>
#include <string>

using namespace std;

int main() {
	string str; // �� ���ο� 100���� ���ڸ� ����ϴ�
	int count = 0;
	cout << "���ڵ��� �Է��϶�" << endl;
	getline(cin, str); // <Enter>Ű�� �Էµ� ������ ���� �б�, ������ ������ '\n'

	int i = 0;
	while (true) {
		if (str[i] =='\0') break; //���� ���� \0�� ����, �� NULL
		if (str[i] == 'o') count += 1;
		i++;
	}
	cout << 'o' << "�� ������ " << count << endl;
}