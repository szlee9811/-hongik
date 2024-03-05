#include <iostream>
using namespace std;

int main() {
	int width;
	cin >> width; //키보드로부터 너비를 읽는다.

	cout << "높이를 입력하세요>>";

	int height;
	cin >> height; //키보드로부터 높이를 읽는다.

	//너비와 높이로 구성되는 사각형의 면적을 계산한다.

	int area = width * height;
	cout << "면적은 " << area << "\n";
}
