// Chap02-02-app : 탈출 문자(escape character, \), 변환 문자(%)  학습

#include<stdio.h>

int main(void)
{
	printf("Hello World!\n");	// 콘솔의 문자열을 format에 맞춰서 출력

	// escape character(탈출 문자)
	// \n : 한줄 내림, new line
	printf("12345\n");
	printf("67890\n");
	printf("Wow!\n");

	// \t : 콘솔에 탭 추가, tab
	printf("My friend, Puka.\n");
	printf("My friend,\t Puka.\n");

	// \b : 백스페이스, backspace
	printf("Goodt\b morning\n");

	// \a : 알럿경보, alert
	printf("Bark\a\n");

	// \r : \r 뒤의 글자를 그줄의 제일 앞으로 이동, returncarrige
	printf("Department \r Lotte\n");

	// 숫자를 콘솔에 출력하는 기능

	// %d : decimal(정수), 정수를 문자로 출력
	printf("%d\n", 10);
	// %nd : n의 자리수만큼 출력하라
	printf("%10d\n", 10);

	// %f : float(실수), 실수를 문자로 출력
	printf("%f\n", 3.141592);
	// 	printf("%d\n", 3.14592);  << 출력 안됨

	// %lf : longfloat, 실수의 소수점을 6자리까지 출력
	printf("%lf\n", 3.14);

	// %.nf : 소수점 n자리까지 출력하고 그뒤는 반올림
	printf("%.2f\n", 3.141592);


	// 여러개의 파라미터
	printf("%5d * %5d = %5d", 6, 7, 6*7);

	return 0;
}