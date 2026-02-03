// 실수형
#define _CRT_SECURE_NO_WARNINGS	// 보안 경고 무시, 구닥다리 함수를 쓰고 싶을 때
#include<stdio.h>
#include<float.h>	// 실수형 표현을 위한 헤더 파일
#include<string.h>	// 문자열 처리를 위한 헤더 파일

int main() {
	// float 4byte
	printf("변수 float, %zu byte, 최소 %e, 최대 %e\n", sizeof(float), FLT_MIN, FLT_MAX);
	// double 8byte
	printf("변수 double, %zu byte, 최소 %e, 최대 %e\n", sizeof(double), DBL_MIN, DBL_MAX);

	// 문자열 : 문자의 배열(Char Array)
	// 문자를 표현할 때 : ''
	// 문자열을 표현할 때 : ""
	char fruit1[20] = "strawberry";	// 절대 'strawberry' X

	printf("과일 이름 : %s\n", fruit1);

	// fruit1 = "banana";	// X, 배열은 대입 불가
	strcpy(fruit1, "banana");	// O, 문자열 복사 함수를 사용하여 변수에 대입
	printf("변경된 과일 이름 : %s\n", fruit1);

	// const : 상수, 변하지 않는 값을 지정
	const double tax_rate = 0.10;	// 세율
	const double pi = 3.141592;	// 원주율
	int income = 5000;		
	double tax = income * tax_rate;
	printf("세금은 %f원\n", tax);

	// tax_rate = 0.15;	// X, 상수는 변경 불가

	// 변수 선언에서 조심할 것
	int age;	// unsigned char(최대값 255)가 가장 적합

	/*
	* 변수명 지정에서 조심할 것
	* 알파벳 A-Z, a-z, 숫자 0-9, 언더스코어(_)만 사용
	* 숫자로 시작할 수 없음
	* 대소문자 구별
	* 예약어 변수명으로 사용 불가(if, while, switch, for 등)
	* ex) 0apple, non stop, ap-ple 등은 변수명으로 부적합
	* 
	* 의미있는 단어들의 조합으로 변수명을 선언할 것
	*/
	char fullname[50] ="Hugo MH Sung";
	int age =100;
	char address[100] = "Seoul, Korea";
	char blood_type = 'A';
	float height = 175.5f;




	return 0;
}