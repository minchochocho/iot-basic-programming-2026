// 문자열 예제

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main() {
	char str[80] = "applejam";	// str[8]부터는 \0(NULL문자+)으로 초기화 됨
	char str2[80];

	printf("최초 문자열 : %s\n", str);
	//printf("문자열 입력 : ");

	//scanf("%s", str);	// 중요
	//// 첨자[i]를 사용하지 않으면
	//// 배열의 이름은 배열의 주소를 나타낸다
	//// 배열 한건을 입력할 때 score[i] 비교필요!

	//printf("입력 후 문자열 : %s\n", str);

	strcpy(str, "grape");	// strcpy를 써야함
	printf("입력 후 문자열 : %s\n", str);
		

	strcpy(str2, str);	// string copy. str2배열에 str 문자열의 명령어를 복사
	printf("입력 후 문자열 : %s\n", str2);



		/*
	str[0] = 'g';
	str[1] = 'r';
	str[2] = 'a';
	str[3] = 'p';
	str[4] = 'e';*/


	return 0;
}