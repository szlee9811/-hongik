#include <iostream>
#include <string>

using namespace std;

int main() {
	string str; // 한 라인에 100개의 문자면 충분하다
	int count = 0;
	cout << "문자들을 입력하라" << endl;
	getline(cin, str); // <Enter>키가 입력될 떄까지 문자 읽기, 구분자 생략시 '\n'

	int i = 0;
	while (true) {
		if (str[i] =='\0') break; //라인 끝에 \0이 있음, 즉 NULL
		if (str[i] == 'o') count += 1;
		i++;
	}
	cout << 'o' << "의 개수는 " << count << endl;
}