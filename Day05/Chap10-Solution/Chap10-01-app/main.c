// 배열과 포인터
// 배열과 포인터는 같이쓰면 임베디드에서 용량을 확 줄이는데 좋다

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int arr[3];
	int i;

	// 기존의 배열 사용법
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = arr[0] + arr[1];

	for ( i = 0; i < 3; i++)
	{
		printf("%5d ", arr[i]);
	}
	puts("");

	//포인터로 동일한 기능 사용법
	// &arr[0] == arr
	printf("배열 arr의 주소 : %zu\n", arr);			// 배열의 이름은 배열의 주소
	printf("배열 arr[0]의 주소 : %zu\n", &arr[0]);	// 첫번째 배열요소 주소와 동일

	printf("배열 arr[1]의 주소 : %zu\n", &arr[1]);	// 1번 요소 주소
	printf("배열 arr[2]의 주소 : %zu\n", &arr[2]);	// 2번 요소 주소

	// 포인터로 동일한 기능 사용법
	*(arr + 0) = 100;	// == arr[0]
	*(arr + 1) = 200;
	*(arr + 2) = *(arr + 0) + *(arr + 1);

	for ( i = 0; i < 3; i++)
	{
		printf("%5d", *(arr+i));
	}printf("\n");

	// 배열요소에 일반형식으로 키보드 입력
	printf("정수 입력 : ");
	scanf("%d",&arr[2]);
	printf("%d\n", arr[2]);

	// 배열요소에 포인터형식으로 키보드 입력
	printf("정수 입력 : ");
	scanf("%d", (arr+2));
	printf("%d\n", *(arr + 2));


	return 0;
}

// local함수에서 400바이트를 메모리
// 포인터를 사용하면 *pa로 해결, 필요한 만큼씩만 더하면서 가져오면됨쓰
void proc(int val[100]) {

}