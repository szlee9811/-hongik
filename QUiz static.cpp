#include <iostream>
#include <string>
using namespace std;


class Employee {
	string name;
	double salary;
	static int count;
public:
	Employee(string name = "", double salary = 0.0) {
		this->name = name; this->salary = salary;
		count++;
	}
	~Employee() { count--; }
	static int getCount() {
		return count;
	}
};

int Employee::count = 0;

int main() {
	Employee e1("±èÃ¶¼ö");
	Employee e2;
	Employee e3("±èÃ¶È£", 20000);

	int n = Employee::getCount();
	cout << "ÇöÀçÀÇ Á÷¿ø ¼ö = " << n << endl;
	return 0;
}