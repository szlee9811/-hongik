#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char EngText[10000]; //10000�ڱ��� ������
    char alphaIndex[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' }; //���ĺ� 26�� �ε���
    int total_of_alphabet = 0; // �Էµ� ���ڿ��� �� ���ĺ� ������ ���ϴ� ����
    int count = 0; // �Էµ� ���ڿ��� ����
    int each_count = 0; // ������ ���ĺ��� ���� Ƚ��

    cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
    cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
    cin.getline(EngText, 10000, ';'); // ;�� �����ڷ� �Ͽ� 10000������ �Է¹���

    while (true) {
        if (EngText[count] == '\0') break; //�Էµ� �ؽ�Ʈ�� ���� ;�� ����, ���Ĵ� �η� ä����
        else count++;// �Էµ� ���ڿ��� ���̸� Ȯ����.
    }

    for (int i = 0; i < count; i++) { //1.�ҹ��ڷ� ��ȯ 2. �� ���ĺ��� ���� ����
        if (isalpha(EngText[i])) { //���� ���ڰ� ���ĺ��̶��?
            EngText[i] = tolower(EngText[i]); // ���� �ҹ��ڷ� ��ȯ
            total_of_alphabet++; // �� ���ĺ��� ����
        }
    }
    cout << "�� ���ĺ� �� " << total_of_alphabet << '\n' << endl; //�� ���ĺ� ���� ����Ѵ�.

    for (int i = 0; i < 26; i++) { //���ĺ� 'a'���� 'z'���� �ݺ�
        each_count = 0; // �ݺ��Ǹ鼭 �ٲ�� ���̹Ƿ� '0'���� �ʱ�ȭ

        for (int j = 0; j < count; j++) { //�Էµ� �ؽ�Ʈ�� ���̸�ŭ Ȯ��
            if (alphaIndex[i] == EngText[j]) // ���ĺ��� �Էµ� ���ڰ� �����ϴٸ�?
                each_count++; //each_count�� �� ���ĺ��� ���� ����
        }

        cout << alphaIndex[i] << " (" << each_count << ")  :"; // ���� ������ó�� ���
        for (int k = 0; k < each_count; k++) // �ش� ���ĺ��� ������ŭ '*' ���
            cout << '*';

        if (i != 25) // ���� ���������� �� ������ ���� ������ ���� �ʾ���
            cout << endl;
    }
    return 0;
}


