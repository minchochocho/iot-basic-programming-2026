// 배열 값을 출력하는 함수

#include<stdio.h>

// 배열 전체를 복사해서 처리하는 함수
void print_arr(int arr[], int size);	// 40 + 4 bytes => 44
void print_arr2(int* pa, int size);		// 8 + 4bytes	=> 12 훨씬 용량을 줄일수있슴

int main() {
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[5] = { 10,20,30,40};

	printf("배열로 처리\n");
	print_arr(arr, 10);

	printf("포인터로 처리\n");
	print_arr2(arr, sizeof(arr)/ sizeof(arr[0]));
	print_arr2(arr2, sizeof(arr2) / sizeof(arr2[0]));

	return 0;
}

void print_arr(int arr[], int size) {
	int i;

	for ( i = 0; i < size; i++)
	{
		printf("%5d", arr[i]);
	}
	puts("");
}

// 포인터로 처리
void print_arr2(int* pa, int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%5d", *(pa + i));

		//배열의 요소처럼 사용할 수 있음
		//printf("%5d", pa[i]); // << 권장 X
		
	}
	puts("");
}