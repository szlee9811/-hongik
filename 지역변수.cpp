#include <iostream> //���� ������ ���������� return�ϸ� �ȵȴٴ� ���� ������
using namespace std; //�ּҴ� �״�� ������ ���� �������  b���� �ٸ��� ����.

int& localVar() {
	int lvar = 200; //����� �ϰ� return�� ��Ŵ
	cout << "&lvar(�Լ�, ����) = " << &lvar << "   lvar = " << lvar << endl;
	return lvar;
}

int main() {
	int a = localVar();
	cout << "&a(����,����) =    " << &a << "    a =  " << a << endl;

	int &b = localVar(); //lvar�� ���� ���ڴ�
	cout << "&b(����,����) =    " << &b << "    b =  " << b << endl;
}