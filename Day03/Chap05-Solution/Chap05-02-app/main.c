// switch-case 문
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {

	printf("switch-case 문 예제\n");

	int rank = 0, money = 0;	// 변수 선언, 초기화
	printf("등수를 입력하세요 : ");
	scanf("%d", &rank);

	//switch (rank) {
	//case 1:
	//	money = 1000;	// 1000만원
	//	break;			// 스위치 문 탈출 주의!!!! break를 빼면 쭉 내려감
	//case 2:
	//	money = 500;
	//	break;
	//case 3:
	//	money = 200;
	//	break;
	//case 4:
	//	money = 50;
	//	break;
	//default:
	//	money = 10;
	//	break;
	//}

	if (rank == 1)
		money = 1000;
	else if (rank==2)
		money = 500;
	else if (rank == 3)
		money = 200;
	else if (rank == 4)
		money = 500;
	else
		money = 1;

	printf("★  %d등 : %d만원에 당첨되셨습니다!  ★\a\n", rank, money);

	return 0;
}