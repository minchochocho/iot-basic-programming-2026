//배열

#include<stdio.h>

int main() {
	// int kor, math, eng, social, science;	// 5과목 점수 저장 변수

	// 배열 선언과 초기화 방법
	// int ary[5];						// 1. 배열선언, 크기 5인 정수형 배열 생성
	// int ary[5] = {80,85,70,92,100};	// 2. 배열 선언과 동시에 초기화
	int ary[5] = { 0 };					// 3. 모든 배열을 0으로 초기화
	int ary2[] = { 10,20,30,40,50 };	// 4. 사이즈 지정 없이 초기화

	int tot=0;	// 5과목 총점
	double avg = 0.0;	// 평균 점수
	int i;
	// int arr2[]; << X 사이즈를 정하거나, 초기화를 해줘야함
	// int arr2[] = { 4 }; << 이런식으루

	ary[0] = 90;	// 국어 점수
	ary[1] = 85;	// 수학 점수
	ary[2] = 70;	// 영어 점수
	ary[3] = 92;	// 사회 점수
	ary[4] = 100;	// 과학 점수

	printf("국어 점수 : %d\n", ary[0]);
	printf("수학 점수 : %d\n", ary[1]);
	printf("영어 점수 : %d\n", ary[2]);
	printf("사회 점수 : %d\n", ary[3]);
	printf("과학 점수 : %d\n", ary[4]);

	//합산
	// tot = ary[0]+ary[1]+ary[2]+ary[3]+ary[4];
	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
		tot += ary[i];
	printf("총점은 %d\n", tot);


	// 평균
	avg = tot / (sizeof(ary) / sizeof(ary[0]));
	printf("평균은 %.2lf\n", avg);

	return 0;
}