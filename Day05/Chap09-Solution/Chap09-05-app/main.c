// 포인터 크기

#include<stdio.h>

int main() {
	char ch;	// 문자형 변수
	int in;		// 정수형 변수
	double db;	// 실수형 변수

	// 선언 및 초기화
	char* pch = &ch;
	int* pin = &in;
	double* pdb = &db;

	// 주소의 크기 출력 : 모두 8bytes
	// 윈도우가 64비트 운영체제와 프로세서 아키텍처를 사용하기 때문
	// 8bytes(64 / 8 = 8), 8bit X 8bit = 64bit	
	printf("char형 변수 주소 크기 : %zu bytes\n", sizeof(&ch));		// 8
	printf("int형 변수 주소 크기 : %zu bytes\n", sizeof(&in));		// 8
	printf("double형 변수 주소 크기 : %zu bytes\n", sizeof(&db));	// 8

	puts("");

	// 포인터의 크기 -> 변수의 주소를 담아야 하므로 모두 8bytes
	printf("char형 변수 크기 : %zu bytes\n", sizeof(pch));		// 8
	printf("int형 변수 크기 : %zu bytes\n", sizeof(pin));		// 8
	printf("double형 변수 크기 : %zu bytes\n", sizeof(pdb));	// 8

	puts("");

	// 포인터가 가리키는 변수의 크기	
	printf("char형 *가 가리키는 변수 크기 : %zu bytes\n", sizeof(*pch));	// 1
	printf("int형 *가 가리키는 변수 크기 : %zu bytes\n", sizeof(*pin));		// 4
	printf("double형 *가 가리키는 변수 크기 : %zu bytes\n", sizeof(*pdb));	// 8

	puts("");

	// 일반 변수의 크기
	printf("char형 변수 크기 : %zu bytes\n", sizeof(ch));	// 1
	printf("int형 변수 크기 : %zu bytes\n", sizeof(in));	// 4
	printf("double형 변수 크기 : %zu bytes\n", sizeof(db));	// 8

	return 0;
}