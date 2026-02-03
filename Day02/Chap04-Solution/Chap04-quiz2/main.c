#include<stdio.h>

int main() {
	int seats = 0;	// 자리 초기화
	int audience =0;	// 관객수 초기화
	double rate = 0;	//입장률 초기화

	seats = 70;		// 전체 자리수
	audience = 65;	// 관객 수 

	rate = (double)audience / seats*100;	// 백분율을 구하기 위해 100곱하기

	printf("입장률 : %.1lf%%\n",rate);
}