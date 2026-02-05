// 포인터 이전 로컬변수, 변수스코프

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void p_line();

void func();

void add(int);	// 매개변수 값을 100 더하는 함수

int x = 10;	// 전역변수(global variable)

int main() {
	x = 30;
	printf("main x = %d\n", x);
	func();
	printf("main x = %d\n", x);
	// 여기까지 기본 변수 스코프

	// 여기부터 블록 스코프
	int a = 1;

	if (a==1)
	{
		int b = 2; 
		printf("블록 내부 : a = %d, b = %d\n", a, b);
	
	}
	printf("블록 외부 : a = %d\n", a);
	// printf("블록 외부 : b = %d",b); << 블록 내부에서 선언한 변수 b는 블록 밖에서 사용 불가, 컴파일 에러
	
	p_line();

	// 함수 스코프
	int y = 10;
	add(y);
	printf("y=%d\n",y);


	return 0;
}

void p_line() {
	for (int i = 0; i < 30; i++)
	{
		printf("-");
	}
	puts("");
}

void add(int x) {
	x += 100;
}

void func() {
	int x = 20;	// 지역변수(local variable) << 우선순위가 더 높음, 되도록이면 변수이름 다르게 쓰기

	printf("func x = %d\n",x);
}


