#include <iostream>
using namespace std;

int main() {
	cout << "�Է��� ������ ������?";
	int n;
	cin >> n;
	if (n <= 0) return 0;
	int* p = new int[n];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ����: ";//������Ʈ ���
		cin >> p[i]; //Ű����κ��� ���� �Է�
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += p[i];
	cout << "��� = " << double(sum) / n << endl;

	delete[] p; //�迭 �޸� ��ȯ
}