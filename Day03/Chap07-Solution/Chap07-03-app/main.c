// 재귀호출 함수
#include<stdio.h>

void fruit();	// 함수 선언
void fruit2(int);	// 종료 레벨을 매개변수로 받는 재귀호출 선언

int main() {
	fruit2(1);	// 함수 호출
	return 0;
}
//
//void fruit() {
//	static int i=1;
//	printf("%d\n",i++);
//	fruit();	// 재귀 호출은 프로그램 실행 속도를 늦춤
//
//}
//


void fruit2(int count) {
	printf("apple\n");
	if (count == 3) {
		return;		// 함수를 호출한 곳으로 되돌아가지만 반환값은 X
	}
	fruit2(count + 1);	// 재귀 호출
}