#include <iostream>
using namespace std;

int main() {
	int score, div;
	cout << "점수를 입력하세요 >>";
	cin >> score;
	if (score > 100 || score < 0) {
		cout << "잘못된 점수 입니다";
		return 0;
	}

	div = score / 10; // div와 같이 case의 레이블에 사용되는 것은 숫자,문자, 열거형만 가능.
	switch (div) {
	case 10:
	case 9:
		cout << "A 입니다"; break; // 90~100 경우
	case 8:
		cout << "B 입니다"; break; // 80점대
	case 7:
		cout << "C 입니다"; break; // 70점대
	case 6:
		cout << "D 입니다"; break; // 60점대
	default : // 나머지 점수 대
		cout << "F 입니다"; break;

	}
}