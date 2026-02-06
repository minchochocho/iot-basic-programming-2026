// 배열과 포인터 차이

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int arr[3] = { 0 };
	int* p_arr = arr;
	int i;

	printf("배열의 크기 : %zu\n", sizeof(arr));
	printf("포인터의 크기 : %zu\n", sizeof(p_arr));

	for ( i = 0; i < 3; i++)
	{
		printf("%5d", *(p_arr + i));
	}

	return 0;
}