// 포인터 계속

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

// &(Ampersand 또는 And), *(Asterik 또는 Star)
int main() {
	int a = 10, b = 15, total;	// 변수 선언 및 초기화 a, b만
	double avg;	// 평균

	//포인터변수
	int* pa, * pb;	// a와 b를 지칭할 포인터 변수
	int* pt = &total;	// 선언과 동시에 초기화
	double* pg = &avg;	// 선언과 동시에 초기화

	pa = &a;
	// *pa = *&a;
	pb = &b;

	// 원래는 total = a + b; avg = total / 2.0 ;
	// 대신 포인터변수로 위의 작업을 대체
	
	// pa -> a변수의 주소
	// *pa -> a 변수의 주소가 가지고 있는 값
	// pb -> b변수의 주소
	// *pb -> a 변수의 주소가 가지고 있는 값

	*pt = *pa + *pb;	// total = a + b;
	*pg = *pt / 2.0;	// avg = total / 2.0;

	// 결과 출력
	printf("a = %d, b = %d, total = %d, avg = %.2lf\n", a,b,total,avg);
	printf("*pa = %d, *pb = %d, *pt = %d, *pg= %.2lf\n", *pa, *pb, *pt,*pg);



	return 0;
}