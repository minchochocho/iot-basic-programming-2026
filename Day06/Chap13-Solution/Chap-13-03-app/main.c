// 값 복사 전달 & 주소 복사
// return 값을 포인터 변수로 받기

#include<stdio.h>

//void add_ten();

int add_ten(int);

void plus_ten(int*);	// 매개변수로 포인터 선언

int* sum(int, int);		// 매개 변수는 일반변수, 리턴을 포인터변수


int main() {
	int a = 100;
	int* result;	// 주소를 받음

	a = add_ten(a);
	printf("a = %d\n", a);	// 110

	plus_ten(&a);	// 주소 전달

	printf("a = %d\n", a);	// 120

	result = sum(40, 60);	// 정적변수 res의 주소를 돌려받음
	printf("*result = %d\n", *result);	// 

	return 0;
}

int* sum(int num1,int num2) {
	static int res;		// 정적 지역변수, static을 사용하여 sum함수가 살아있게 하겠다는 의미

	res = num1 + num2;

	return &res;	// 정적변수의 주소를 반환
}


void plus_ten(int* pa) {
	*pa += 10;
}

// 값 복사후 리턴 없으면 값이 사라짐
//void add_ten(int num){
//	num+=10;
//}

int add_ten(int num) {
	num += 10;

	return num;
}

