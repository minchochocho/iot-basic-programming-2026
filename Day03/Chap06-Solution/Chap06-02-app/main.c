// for문

#include<stdio.h>

int main(){
	int a = 1;
	int i = 0;	// 반목문을 위한 변수

	/*
	*for(초기값;조건식;증감식){
	*	반복할 실행문
	*}
	*/

	for ( i = 0; i < 5; i++)
	{
		a *= 2;
	}

	printf("a : %d\n", a);	// for문을 빠져나온 뒤 a값 콘솔 출력

	// $를 10번 출력

	for ( i = 0; i < 10; i++)
	{
		printf("%c", '$');	// prinff("$");
	}
	printf("\n");

	// 2중 for문
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++) {
			printf("%s","*");
		}
		printf("\n");
	}

	return 0;
}