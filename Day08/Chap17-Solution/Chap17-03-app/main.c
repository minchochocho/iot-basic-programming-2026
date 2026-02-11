// 구조체 내 구조체 사용

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct profile {	// 구조체 정의
	int age;
	double height;
};

struct student {
	int id;				// 학번
	double grade;		// 학점
	struct profile pf;	// 프로필 구조체 선언
};

int main() {
	// C99 표준이상에서 사용할수 있는 구조체 선언과 동시 초기화 방법
	struct student st1 = {
		.id = 9573,
		.grade = 4.1,
		.pf = {
			.age = 25,
			.height = 173.0
		}
	};

	st1.id = 20220202;
	st1.grade = 4.1;
	// student 구조체 내 profile 구조체 사용
	st1.pf.age = 25;	// .으로 레벨을 나타냄
	st1.pf.height = 173.0;

	// 출력
	printf("학번 : %d\n", st1.id);
	printf("학점 : %.1f\n", st1.grade);
	printf("나이 : %d\n", st1.pf.age);
	printf("키 : %.1f\n", st1.pf.height);

	return 0;
}