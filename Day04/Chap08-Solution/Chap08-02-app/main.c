// 성적처리 프로그램
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int score[6];
	int i;
	int total = 0;

	double avg;

	printf("%zu\n", sizeof(score));	// 배열의 크기
	printf("%zu\n", sizeof(score[0]));	// 배열 요소 하나의 크기	// == sizeof(int)
	printf("배열의 사이즈 %zu\n", sizeof(score) / sizeof(score[0]));

	// 키보드로 성적 입력
	for ( i = 0; i < sizeof(score)/ sizeof(score[0]); i++)
	{
		scanf("%d", &score[i]);
	}

	// 합산
	for ( i = 0; i < sizeof(score) / sizeof(score[0]); i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	// 각 성적 출력
	for ( i = 0; i < sizeof(score) / sizeof(score[0]); i++)
	{
		printf("%5d", score[i]);
	}
	puts("");
	printf("평균 : %.1f\n", avg);

	return 0;
}