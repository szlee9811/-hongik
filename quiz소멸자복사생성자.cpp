#include <iostream>
#include <cstring>
using namespace std;
class MyString {
private:
	char* pBuf; //�������� �Ҵ�� �޸��� �ּҰ� ����
public:
	MyString(const char* s = NULL);
	MyString(MyString& s);
	~MyString();
	void print();
	size_t getSize();
};

MyString::MyString(const char* s) {
	if (s == NULL) {
		pBuf = new char[1];
		pBuf[0] = NULL;
	}
	else {
		pBuf = new char[strlen(s) + 1];
		strcpy_s(pBuf, strlen(s) + 1, s);
	}
}
void MyString::print() {
	cout << pBuf << endl; 
}
size_t MyString::getSize() {
	return strlen(pBuf);
}

//���� ������
MyString::MyString(MyString& s) {
	pBuf= new char[s.getSize() + 1];
	strcpy_s(pBuf, s.getSize() + 1, s.pBuf);
}

//�Ҹ���
MyString::~MyString() {
	if (pBuf) delete[] pBuf;
}

int main() {
	MyString str1;
	MyString str2("Hello");
	MyString str3 = "World!";
	MyString str4(str3);
	//MyString str4 = str3; ����
	str1.print();
	str2.print();
	str3.print();
	str4.print();
	return 0;
}

