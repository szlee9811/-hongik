#include <iostream> //지역 변수를 참조변수로 return하면 안된다는 것을 보여줌
using namespace std; //주소는 그대로 있지만 값은 사라져서  b값이 다르게 나옴.

int& localVar() {
	int lvar = 200; //출력을 하고 return을 시킴
	cout << "&lvar(함수, 지역) = " << &lvar << "   lvar = " << lvar << endl;
	return lvar;
}

int main() {
	int a = localVar();
	cout << "&a(메인,지역) =    " << &a << "    a =  " << a << endl;

	int &b = localVar(); //lvar과 같이 쓰겠다
	cout << "&b(메인,지역) =    " << &b << "    b =  " << b << endl;
}