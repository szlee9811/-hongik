#include <iostream>
#include <string>
using namespace std;
//cin.getline�� string�� ���� �ʾƵ� ����� ������


int main() {
	cout << "�ּҸ� �Է��ϼ���>>";

	string address;
	getline(cin, address, '&'); //Ű����κ��� �ּ� �б�

	cout << "�ּҴ� " << address << "�Դϴ�\n"; //�ּ� ���
}