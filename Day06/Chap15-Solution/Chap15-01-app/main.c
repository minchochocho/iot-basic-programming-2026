// 

#include<stdio.h>

int main() {
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("------------------------------------------------------------\n");
	printf("변수      변수값       &연산       *연산      **연산\n");
	printf("------------------------------------------------------------\n");

	printf("  a%12d%12u\n", a, &a);	// 변수 a의 값, 주소만 출력
	printf(" pi%12u%12u%12d\n", pi, &pi, *pi);	// pi(포인터변수)
	printf("ppi%12u%12u%12u%12d\n", ppi, &ppi, *ppi, **ppi);


	return 0;
}