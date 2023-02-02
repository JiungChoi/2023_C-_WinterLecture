/**
* 예외처리 코드 (0 divide error), 예외처리
**/

#include<iostream>
#include<cassert>
using namespace std;


int main() {
	int num1, num2, result;
	for (int i = 0; i < 5; i++) {
		cout << "정수를 입력하세요: ";
		cin >> num1;
		cout << "또 다른 정수를 입력하세요 : ";
		cin >> num2;
		if (num2 == 0) {
			cout << "0으로 나눌 수 없습니다. 프로그램을 중단합니다.";
			assert("num> 0");
		}
		result = num1 / num2;
		cout << "결과 : " << result;
	}
	return 0;
}
