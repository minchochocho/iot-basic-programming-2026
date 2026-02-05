// 변수의 주소

#include<stdio.h>

int main() {
	int a = 100;		// int형 변수 선언 4byte(윈도우 기준), 다른곳은 8byte
	double b = 300;	// double형 변수 선언 8byte
	char c = 12;		// char형 변수 선언 1byte

	printf("int형 변수 a의 주소 : %u\n",&a);	// 주소연산자 %u, %p 두개는 같은 값(보여주는 형식이 다름)
	printf("double형 변수 b의 주소 : %u\n", &b);
	printf("char형 변수 c의 주소 : %u\n", &c);


	return 0;
}