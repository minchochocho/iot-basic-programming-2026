// 정적 변수 static

#include<stdio.h>
void auto_fuc();
void static_func();

int main() {
	int i;

	printf("일반 지역변수 사용 함수 호출\n");
	for (int i = 0; i < 3; i++)
	{
		auto_fuc();
	}

	printf("일반 지역변수 사용 함수 호출\n");
	for (int i = 0; i < 3; i++)
	{
		static_func();
	}



	return 0;


}

void auto_fuc() {
	// auto_func 함수가 호출될때 생성되고 종료될때 사라짐
	auto int a = 0;		// auto, 0으로 초기화

	a++;
	printf("%d \n", a);
}

void static_func() {
	// main.c가 처음 시작될때 메모리에 올라갔다가, main.c가 종료될때 메모리에서 사라짐
	static int a;		// static, 0으로 자동 초기화, 직접 초기화해도 상관x

	a++;
	printf("%d \n", a);
}
