#include <iostream>
using namespace std;

double biggest(double x[], int n) { // �Լ��� �̸��ϰ� �迭�� ũ�� ����
	double big=x[0];
	for (int i = 0; i < 5; i++)
		if (x[i] > big) big = x[i];

	return big;
		
}

int main() {
	double a[5];
	cout << "5���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	cout << "���� ū �� = " << biggest(a, 5) << endl;
}