// 데이터 입력
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	// 정수값 입력
	int input_val;

	printf("정수 값을 입력하세요 : ");
	scanf("%d", &input_val);	// & 주소 : 키보드로 입력되는 값을 input_val의 주소에 가져가서 넣음
	printf("입력된 정수 값 : %d\n", input_val);

	// 두개의 데이터 입력
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d %lf", &age, &height);
	printf("나이는 %d세 이고, 키는 %.2fcm 입니다.\n", age, height);

	// 문자, 문자열 입력
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);	// 배열의 이름만 적으면, 배열의 주소를 나타냄(& 생략)
	printf("%s의 학점은 %c에요.\n", name, grade);

	return 0;
}