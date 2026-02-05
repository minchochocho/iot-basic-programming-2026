// 대소문자 변환 프로그램
// DON'T Worry, Be Happy~ --> don't worry, be happy~ => 바뀐 문자가 7

#define CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	char str[80];
	int i;
	int str_len = sizeof(str) / sizeof(str[0]);
	int pos;	// 문자열에서 \0값이 처음 나오는 위치(배열 인덱스)
	int cnt = 0;	// 대문자에서 소문자로 바뀐 갯수

	printf("문장 입력 : ");
	gets(str);

	for (i = 0; i < str_len; i++)
	{
		if (str[i] == '\0') {
			pos = i;
			break;
		}
	}

	for ( i = 0; i < pos; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z') {	// 문자 한자가 A에서 Z 사이에 있으면
			str[i] += 32;	// 소문자 변환 (대문자랑 소문자는 32만큼 차이가 남)
			cnt++;
		}
	}

	printf("바뀐 문장 : ");
	puts(str);
	printf("바뀐 개수 : %d개",cnt);

	return 0;
}


/*
void p_line() {
	for (int i = 0; i < 30; i++)
	{
		printf("-");
	}
	puts("");
};

int main() {
	char str[80];
	int i=0;
	int str_len = sizeof(str) / sizeof(str[0]);
	int cnt=0;

	str[0] = '\n';
	printf("문자열 입력 : ");
	gets(str);		
	while (str_len--) {
		if (str[i] >= 65 && str[i] < 97)
		{
			str[i] += 32;
			cnt++;
			i++;
		}
	}
	p_line();
	printf("소문자로 변환된 문자 : %s\n", str);
	printf("변환된 문자 개수 : %d\n", cnt);


}
*/