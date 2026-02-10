// 콘솔프로그램 명령행 인수
// 깃, 도커, 일반적인 콘솔 명령어들을 쓸때 중요한 부분이라 알면 좋다
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// main함수, 엔트리포인트(entry point) = 진입점
// argc 인자 개수
// argv 인자 문자열의 배열
// .\Chap16-06-app.exe help
// argc = 2
// argv = [".\Chap16-06-app.exe", "help"]
int main(int argc, char** argv) {	// 거의 디폴트 파라미터
	int i;

	/*for ( i = 0; i < argc; i++) {
		printf("%s\n", *(argv + i));
	}
	*/

	if (argc<2) {

		printf("mygit : 명령어가 필요함\n");
		printf("사용법 : mygit <command> [options]\n");

		return 0;
	}

	/* git init */
	if (strcmp(argv[1], "init") == 0) {
		printf("깃저장소 초기화!");
	}else if (strcmp(argv[1],"commit")==0) {
			if (argc >= 4 && strcmp(argv[2],"-m")==0) {
				printf("커밋 메시지 : '%s'\n",argv[3]);
				printf("[main abc1234] 커밋 완료\n");
			}
			else {
				printf("오류");
			}
		}
	else {
		printf("mygit : 알 수 없는 명령 '%s'\n", argv[1]);
	}


	// 입력받는 문자열마다 여러가지 처리되는 프로그램을 만들 수 있음
}