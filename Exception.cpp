/**
* 예외처리 코드 (0 divide error), 예외가 나는 경우
**/

#include<iostream>
using namespace std;

int main() {
	int num1, num2, result;
	for (int i = 0; i < 5; i++) {
		cout << "정수를 입력하세요: ";
		cin >> num1;
		cout << "또 다른 정수를 입력하세요 : ";
		cin >> num2;
		result = num1 / num2;
		cout << "결과 : " << result;
	}
	return 0;
}
