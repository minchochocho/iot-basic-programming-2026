// 구조체

#define _CRT_SECURE_NO_WARNINGS

#pragma pack(1)	// 패딩바이트를 사용안함

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
	int num;		// 4byte
	double grade;	// 8byte
};

struct student2 {	// 총 17바이트
	/*
	char ch1;		// 1
	short num;		// 2
	char ch2;		// 1
	int score;		// 4
	double grade;	// 8byte
	char ch3l		// 1
	
	*/
	char ch1;		// 1
	short num;		// 2
	int score;		// 4
	double grade;	// 8byte
	char ch3;		// 1
	char ch2;		// 1
};

int main() {

	struct student st1;
	struct student2 st2;

	// 실제 사용되는 바이트는 12byte, 그러나 패팅바이트로 인해 16byte로 구성됨
	printf("구조체 student 크기 : %zu\n", sizeof(st1));	// 16byte

	// 실제 사용되는 바이트는 17byte, 그러나 패팅바이트로 인해 32byte로 구성됨
	printf("구조체 student 크기 : %zu\n", sizeof(st2));	// 32byte
	// 구조체에 선언하는 멤버변수의 위치만 조정해도 패딩바이트가 사라짐 -> 24byte


	return 0;

}