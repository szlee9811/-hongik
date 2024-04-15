#include <iostream> //�̰� ��������, string�� substr, length �̿��ؼ� ������
//�ƴϸ� ��ü�� �̾ȿ� ����������� �ִ�. -> ����, ���� manage, control
using namespace std;
class Sample {
	int* p; int capacity; int size;
public:
	Sample(int n) { //������
		capacity = n; p = new int[n]; //n�� ���� �迭
	}
	void read(); //���� �Ҵ���� ���� �迭 p�� ����� ����
	void write(); //���� �迭�� ȭ�鿡 ���
	int big(); //���� �迭�� ȭ�鿡 ���
	int getSize() { return size; }
	~Sample() { delete[] p; } //�Ҹ���
};

void Sample::read() {
	int inputSize;
	cout << "�Է��Ϸ��� ������ ������ ? ";
	cin >> inputSize; size = inputSize;

	cout << size << "���� ������ �Է��Ͻÿ� ";
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
	Sample s(10); //10�� ���� ���� �迭�� ���� Sample ��ü ����
	s.read(); //Ű���忡�� ���� �迭 �б�
	cout << "�����迭 ����" << s.getSize() << "���� ����մϴ�.";
	s.write(); //���� �迭 ���
	cout << "���� ū ���� " << s.big() << endl; //���� ū �� ���
}