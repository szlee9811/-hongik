#include <iostream>
#include <string>
using namespace std;

//str.size() 랑 str.length()는 같은 뜻 스트링의 길이!! 외우자

int main() {
	string str;
	cout << "문자열 입력>>";

	getline(cin, str);
	int len = str.size();
	for (int i = 1; i <= len; i++) {
		for (int j = 0; j < i; j++)
			cout << str[j];
		cout << endl;
	}
}