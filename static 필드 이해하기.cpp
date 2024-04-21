#include <iostream>
using namespace std;

class StaticTest {
	static int count; //객체의 개수를 헤아림.
	string name;
public:
	StaticTest(string name) {
		count++;
		this->name = name;
		cout << "객체생성 : " << count << " " << "이름 :" << name << endl;
	}
};
int StaticTest::count = 0;

int main() {
	StaticTest st1("method 01");
	StaticTest st2("method 02");
	StaticTest st3("method 03");
}