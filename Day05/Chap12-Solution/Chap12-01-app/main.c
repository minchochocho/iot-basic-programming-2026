// 문자열과 포인터

#include<stdio.h>


int main() {
	// 문자열 출력
	printf("%s\n", "apple");

	//문자열 주소확인
	printf("%u\n", "apple");
	printf("%u\n", "apple");
	printf("두번째 문자 주소 : %u\n", "apple"+1);
	printf("%c\n", *("apple" + 1));
	printf("%c\n", *("apple"));
	printf("%c\n", "apple"[4]);

	char fruit[6] = "apple";

	printf("%u\n", fruit);
	printf("두번째 문자 주소 : %u\n", fruit + 1);
	printf("%c\n", *(fruit + 1));
	printf("%c\n", *(fruit));
	printf("%c\n", fruit[4]);

	// fruit = "banan";	// 문자 배열의 값을 변경할 수 없음
	strcpy(fruit, "banan");
	printf("%s\n", fruit);

	char* dessert = "apple";
	dessert = "banana";
	printf("%s", dessert);
	// 포인터 배열을 사용하면 값을 넣을 수 있다.

	return 0;
} 