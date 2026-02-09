// 다차원 배열(보통은 2차원)
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	// int score[3][4];
	int score[3][4] = {	// 2차원 배열 초기화 방법
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	//int score[3][4]={0};
	int total;
	double avg;

	char animal[5][20];	// 동물 5마리, 이름길이 20
	int cnt;

	int i, j;	// 2중 for문 변수

	// 2차원 배열 동물 이름 관리
	// sizeof(animal) = 100, sizeof(animal)[0] = 20    ==>   5
	cnt = sizeof(animal) / sizeof(animal)[0];
	// printf("%d\n",cnt);

	for (i i = 0; i < cnt; i++)
	{
		scanf("%s", animal);
	}

	// 2차원 배열로 성적 처리
	for ( i = 0; i < 3; i++)		// 행
	{
		printf("%d번 학생, 4과목 점수 입력 : ", i + 1);
		for (j = 0; j < 4; j++) {	// 열
			scanf("%d", &score[i][j]);	
			// 점수 입력, 앞쪽[]는 행-> 바깥쪽 for 변수, 뒤쪽[]열 -> 안쪽 for문 변수

		}
	}

	// 점수 채점
	for ( i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++){
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("%d번 학생의 총점 : %d점, 평균 : %.2lf점\n", i+1, total, avg);
	}

	return 0;
}