#include <iostream>
using namespace std;

int addArray(int a[], int size); //�Լ��� ���� ����
void makeDouble(int a[], int size); //�Լ��� ���� ����
void printArray(int a[], int size); //�Լ��� ���� ����

int main() {
	int n[] = { 1,2,3,4,5 };

	//�迭 n[]�� ������ �Ű��Լ��� ����
	int sum = addArray(n, 5); //�迭�� ���� ���մϴ�.
	cout << "�迭 n�� ���� " << sum << "�Դϴ�\n";

	makeDouble(n, sizeof(n) / sizeof(n[0])); //�迭 n�� ���� 5�� �Ű� ������ ����
	//�迭�� ���� �� ��� ������Ŵ
	printArray(n, sizeof(n) / sizeof(n[0])); //�迭�� ����Ѵ�.
	int size = sizeof(n) / sizeof(n[0]);
	cout << "size " << size << endl;

}

//�迭�� ������ ���޹޾� ���� �����ϴ� �Լ�
int addArray(int a[], int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += *(&(*(a + i)));

	cout << "size : " << size << endl;
	return sum;
}

//�迭�� ���� �� ��� ������Ű�� �Լ�
void makeDouble(int *a, int size) {
	int i;
	for (i = 0; i < size; i++)
		a[i] *= 2; //������ ���� 2�� ����
}

//�迭�� ����ϴ� �Լ�
void printArray(int a[], int size) {
	int i;
	for (i = 0; i < size; i++)
		cout << a[i] << ' '; //���� ���
	cout << "\n";
}