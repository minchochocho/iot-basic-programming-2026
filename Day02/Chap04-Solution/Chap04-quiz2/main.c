#include<stdio.h>

int main() {
	int seats = 70;
	int audience = 65;
	double rate = 0;

	rate = (double)audience / seats*100;	// 백분율을 구하기 위해 100곱하기

	printf("입장률 : %.1lf%%\n",rate);
}