#include <iostream>
#include <string>
using namespace std;
//cin.getline은 string을 쓰지 않아도 사용이 가능함


int main() {
	cout << "주소를 입력하세요>>";

	string address;
	getline(cin, address, '&'); //키보드로부터 주소 읽기

	cout << "주소는 " << address << "입니다\n"; //주소 출력
}