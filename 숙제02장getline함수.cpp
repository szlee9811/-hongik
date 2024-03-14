#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char EngText[10000]; //10000자까지 가능함
    char alphaIndex[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' }; //알파벳 26자 인덱스
    int total_of_alphabet = 0; // 입력된 문자열의 총 알파벳 개수를 구하는 변수
    int count = 0; // 입력된 문자열의 길이
    int each_count = 0; // 각각의 알파벳이 사용된 횟수

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
    cin.getline(EngText, 10000, ';'); // ;를 구분자로 하여 10000개까지 입력받음

    while (true) {
        if (EngText[count] == '\0') break; //입력된 텍스트의 끝에 ;이 있음, 이후는 널로 채워짐
        else count++;// 입력된 문자열의 길이를 확인함.
    }

    for (int i = 0; i < count; i++) { //1.소문자로 변환 2. 총 알파벳의 개수 세기
        if (isalpha(EngText[i])) { //만약 문자가 알파벳이라면?
            EngText[i] = tolower(EngText[i]); // 먼저 소문자로 변환
            total_of_alphabet++; // 총 알파벳의 개수
        }
    }
    cout << "총 알파벳 수 " << total_of_alphabet << '\n' << endl; //총 알파벳 수를 출력한다.

    for (int i = 0; i < 26; i++) { //알파벳 'a'부터 'z'까지 반복
        each_count = 0; // 반복되면서 바뀌는 값이므로 '0'으로 초기화

        for (int j = 0; j < count; j++) { //입력된 텍스트의 길이만큼 확인
            if (alphaIndex[i] == EngText[j]) // 알파벳과 입력된 글자가 동일하다면?
                each_count++; //each_count에 각 알파벳의 개수 세기
        }

        cout << alphaIndex[i] << " (" << each_count << ")  :"; // 숙제 실행결과처럼 출력
        for (int k = 0; k < each_count; k++) // 해당 알파벳의 개수만큼 '*' 출력
            cout << '*';

        if (i != 25) // 숙제 실행결과에서 맨 마지막 줄은 개행을 하지 않았음
            cout << endl;
    }
    return 0;
}


