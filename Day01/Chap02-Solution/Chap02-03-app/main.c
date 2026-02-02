// 진법 표시
#include<stdio.h>

int main() {
	printf("%d\n", 12);		// 10진수 12
	printf("%d\n", 014);	// 8진수(숫자앞에 0) 12
	printf("%d\n", 0xc);	// 16진수(숫자앞에 0x) 12

	printf("%d\n", 12);		// 10진수
	printf("%do\n", 12);	// 8진수(%d 뒤에 o)
	printf("%dx\n", 12);	// 16진수(%d 뒤에 x, 소문자)
	printf("%dX\n", 12);	// 16진수(%d 뒤에 X, 대문자)


	return 0;
}