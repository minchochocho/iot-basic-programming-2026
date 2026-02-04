// 무한루프(infinite loop)

#include<stdio.h>

int main() {
	int i = 1;

	// while문으로 무한루프
	/*while (1) {
		printf("IF %d\n",i++);
	}*/

	//for문으로 무한루프
	for (;;)
	{
		printf("IF %d\n", i++);
	}


	while (1) {
		printf("Be happy!\n");
		i++;
		if (i == 200000)	// 20만번 출력 후 종료
			break;
	}

	// continue 문, 특정 상황에서 일부 반복을 제외시킬때
	for ( i = 1; i < 100; i++)
	{
		if (i % 3 == 0)	
			continue;	// 3의 배수일때는 반복문 아래를 실행하지 않고 다음 반복으로 넘어감
		printf("%d\t", i);
	}
	puts("");
}