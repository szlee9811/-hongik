#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "���ڿ��� �Է��ϼ���(�ѱ� �ȵ�) " << endl;
	getline(cin, s, '\n');
	int len = s.length();//���ڿ��� ����

	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1);// �� ���� ���� 1���� ���ڿ��� �и�
		string sub = s.substr(1, len - 1);  //������ ���ڵ��� ���ڿ��� �и�
		s = sub + first; // �� ���ڵ��� �����Ͽ� ���ο� ���ڵ��� ����
		cout << s << endl;
	}
}