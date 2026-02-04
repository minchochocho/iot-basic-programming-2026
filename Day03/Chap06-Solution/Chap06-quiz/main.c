// 별찍기 예제
/*
	*******
	*******	
	*******
	*******
	*******

	   *
	  ***
	 *****
	*******
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int n;

int main() {
	int i, j, k;

	// 5x5 별찍기
	for (i = 1; i < 6; i++)
	{
		// 반복문의 조건만 조절하면 대부분 답이 나옴
		for (j = 1; j < 6; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// 왼쪽 아래 직각삼각형
	for (i = 1; i < 6; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf("*");

		}
		printf("\n");
	}

	// 오른쪽 아래 직각삼각형
	for (i = 1; i < 6; i++)
	{
		for (k = 1; k < 6 - i; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// 피라미드 별찍기
	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < 4 - i; k++)
		{
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// 별로 X자 모양 만들기
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if(i==j)
				printf("*");
			else if(i+j==4)
				printf("*");
			else
				printf(" ");
		}
		puts("");
	}

	// 입력하는수 만큼 피라미드 별찍기

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n - i; k++) {
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}