#include <iostream>
using namespace std;

class StaticTest {
	static int count; //��ü�� ������ ��Ƹ�.
	string name;
public:
	StaticTest(string name) {
		count++;
		this->name = name;
		cout << "��ü���� : " << count << " " << "�̸� :" << name << endl;
	}
};
int StaticTest::count = 0;

int main() {
	StaticTest st1("method 01");
	StaticTest st2("method 02");
	StaticTest st3("method 03");
}