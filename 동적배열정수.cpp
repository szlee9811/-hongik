#include <iostream> //이건 정수문제, string은 substr, length 이용해서 내겠지
//아니면 객체도 이안에 집어넣을수가 있다. -> 숙제, 이후 manage, control
using namespace std;
class Sample {
	int* p; int capacity; int size;
public:
	Sample(int n) { //생성자
		capacity = n; p = new int[n]; //n개 정수 배열
	}
	void read(); //동적 할당받은 정수 배열 p에 사용자 읽음
	void write(); //정수 배열을 화면에 출력
	int big(); //정수 배열을 화면에 출력
	int getSize() { return size; }
	~Sample() { delete[] p; } //소멸자
};

void Sample::read() {
	int inputSize;
	cout << "입력하려는 정수의 갯수는 ? ";
	cin >> inputSize; size = inputSize;

	cout << size << "개의 정수를 입력하시오 ";
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl << endl;
}

int Sample::big() {
	int Max = p[0];
	for (int i = 0; i < size; i++) {
		if (p[i] > Max) Max = p[i];
	}
	return Max;
}


int main() {
	Sample s(10); //10개 동적 정수 배열을 가진 Sample 객체 생성
	s.read(); //키보드에서 정수 배열 읽기
	cout << "동적배열 정수" << s.getSize() << "개를 출력합니다.";
	s.write(); //정수 배열 출력
	cout << "가장 큰 수는 " << s.big() << endl; //가장 큰 수 출력
}