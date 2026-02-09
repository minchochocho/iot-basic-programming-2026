#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>		// 문자열 함수를 사용하기 위한 헤더 파일

int main() {
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

#pragma region strcpy()함수영역

	printf("strcpy() 함수 사용\n");
	printf("최초 문자열 : %s\n",str1);
	strcpy(str1, str2);	// str1에 str2 문자열을 복사하라
	printf("바뀐 문자열 : %s\n", str1);
	
	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "applemango");	// 문자열 상수도 가능
	printf("바뀐 문자열 : %s\n", str1);

	// str2 = "apple" << 문자 배열은 값 변경불가, strcpy를 사용해야 함
	ps2 = "apple"; // 문자 포인터는 값 변경 가능

#pragma endregion

#pragma region strncpy()함수영역


#pragma region strncpy()함수
	// strncpy() 원하는 개수의 문자를 복사하는 합수
	char str3[20] = "mango tree";

	strncpy(str3, "apple-pie", 5);
	printf("바뀐 문자열 : %s\n", str3);


#pragma endregion

#pragma region strcat, strncat()함수
		// strncpy() 원하는 개수의 문자를 복사하는 합수
	char str4[20] = "straw";

	strcat(str4, "berry");
	printf("바뀐 문자열 : %s\n", str4);

	strncat(str4, "piece",3);
	printf("바뀐 문자열 : %s\n", str4);


#pragma endregion

#pragma region strlen() 함수

	printf("strlen() 함수\n");


	printf("str1 : %s, 글자길이  %zu\n", str1,strlen(str1));

	strcpy(str1, "애플망고");
	// C에서 한글 글자 길이는 한글자당 2로 지정
	printf("str1 : %s, 글자길이  %zu\n", str1, strlen(str1));


#pragma endregion

#pragma region strcmp(), strncmp() 함수

	char str5[80] = "pear";
	char str6[80] = "peach";


	printf("사전에 나중에 나오는 과일 :");

	// strcmp(str5, str6) = 1(str5가 str7보다 사전에 나중에 나온다), 0(같은 문자열), 1(str5가 먼저 나온다)

	if (strcmp(str5, str6)>0)
	{
		printf("%s\n", str5);
	}
	else if (strcmp(str5, str6) == 0) {

		printf("%s 같은단어\n", str5);
	}
	else {
		printf("%s\n", str6);
	}

	int result = strncmp(str5, str6,3);	// pear랑 peach를 3글자만 비교, pea로 같음

	if (result == 0)
	{
		printf("앞 3글자가 동일합니다.\n");
	}
	else if (result < 0) {
		printf("%s < %s\n", str5, str6);
	}
	else {
		printf("%s >%s\n", str5, str6);

	}

#pragma endregion
	return 0;

}