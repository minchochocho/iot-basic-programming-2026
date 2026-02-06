// 문자 입력 실수

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	//char ch1, ch2;
	//char ch3;

	//scanf("%c%c", &ch1, &ch2);	// a엔터를 치면, ch1 = 'a', ch2 = '\n';
	//printf("[%c%c]", ch1, ch2);

	//// getchar(), putchar() 함수로 글자 하나를 입력, 출력
	//// 주석변환토글 Ctrl + /
	//// 주석변환 Ctrl + k + c
	//// 주석해제 Ctrl + k + u

	//ch3 = getchar();	// 앞선 입력의 \n도 들어갈 수 있음!!!
	//printf("입력값 -> ");
	//putchar(ch3);

	// 입력버퍼 문제
	int num, grade;
	
	int a;
	a = 10 + 20;


	printf("학번 입력 : ");
	scanf("%d", &num);
	getchar();	// 키보드의 버퍼의 내용을 읽어옴. 그냥 사라짐. buffer clear -> \n에 대한 해결만 하는 것
	printf("학점 입력 : ");
	grade = getchar();

	printf("학번 : %d, 학점 : %c",num,grade);

	return 0;
}