#include <iostream>
#include <string>
using namespace std;

//stoi("300") : string to integer


class integer {
private:
	int n;
public:
	integer(int a) {
		n = a;
	}

	int get() {
		return n;
	}

	void set(int a) {
		n = a;
	}

	integer(string s) {
		n = stoi(s);
	}

	bool isEven() {
		return n % 2 == 0 ? true : false;
	}
};


int main() {
	integer n(30);
	cout << n.get() << ' '; // 30출력
	n.set(50);
	cout << n.get() << ' '; // 50출력
	integer m("300");
	cout << m.get() << ' '; //300 출력
	cout << m.isEven(); // true(정수로 1) 출력
}