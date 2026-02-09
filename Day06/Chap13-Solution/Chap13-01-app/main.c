// 지역변수, 전역변수, 정적변수

#include<stdio.h>
int a;

void assign();	// 전역변수

int main() {
	auto int a = 10;
	int b = 2;

	assign();
	printf("main 함수 a : %\n ", a);

	printf("교환전 %, %d\n", a, b);
	a = 0, b = 0;
	int temp;	// 블록 내 지역변수가 우선적으로 쓰임
	temp = 1;
	a = b;
	b = a;

	printf("교환후 %d, %d\n", a, b);


	return 0;
}


void assign() {
	int a;

	a = 100;
}