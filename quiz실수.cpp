#include <iostream>
using namespace std;

double biggest(double x[], int n) { // 함수의 이름하고 배열의 크기 전달
	double big=x[0];
	for (int i = 0; i < 5; i++)
		if (x[i] > big) big = x[i];

	return big;
		
}

int main() {
	double a[5];
	cout << "5개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	cout << "제일 큰 수 = " << biggest(a, 5) << endl;
}