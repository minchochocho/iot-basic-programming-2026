// 분할 컴파일 - 보조 소스코드


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void input_data(int* pa, int* pb) {
	printf("두 정수 입력 : ");
	scanf("%d %d", pa, pb);

}
double average(int a, int b) {
	int tot = a + b;
	double avg;

	avg = tot / 2.0;
	return avg;
	//return (a + b) / 2;
}