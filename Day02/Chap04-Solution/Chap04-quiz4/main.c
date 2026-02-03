#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	double kg = 0, cm = 0;
	double bmi = 0;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%lf %lf",&kg,&cm);
	bmi = kg / ((cm / 100) * (cm / 100));
	printf("%s", (bmi >= 20.0) && (bmi < 25) ? "표준입니다" : "체중관리가 필요합니다");	// bmi가 20이상 25미만이면 표준, 아니면 체중관리

	return 0;
}