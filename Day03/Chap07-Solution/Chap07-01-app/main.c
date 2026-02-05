//함수

#include<stdio.h>

// C에서만 거의 필수! (C 최신 표준에서는 에러X << 구닥다리~, 근데 표준을 낮추면 오류가 날수도 있으니깐~~)
//  int sum(int x, int y);	// 함수 선언
int sum(int, int); // 선언의 매개변수는 변수명 생략이 가능

int main() {
	int a = 10, b = 20;
	char result;		// 두 정수를 더한 값을 저장할 변수

	// return이 있는 함수를 호출하면 반드시 lvalue(변수)가 있어야된다
	result = sum(a, b);	// sum 함수 호출 F11로 디버깅
	printf("result : %d\n", result);

	return 0;
}

int sum(int x, int y) {	// 함수 정의
	int temp;

	temp = x + y;
	return temp;
}