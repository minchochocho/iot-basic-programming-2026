// 파일 입출력 추가내용

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	FILE* fp;
	char str[30];

	fp = fopen("./fruits.txt","a+");	// 기존 텍스트에 추가, + 읽고 쓰기가 다된다는 얘기

	if (fp == NULL) {
		printf("파일 오픈 실패!\n");
		exit(1);
	}
	
	while (1) {
		printf("과일 이름 입력 : ");
		scanf("%s", str);		// 키보드 입력

		if (strcmp(str, "end") == 0) {
			break;		// 입력으로 end를 넣으면 종료
		}
		else if (strcmp(str, "list") == 0) {	// list를 입력하면 이전에 입력한 과일이름을 나열
			fseek(fp, 0, SEEK_SET);	// 버퍼(파일 스트림)의 맨 처음으로 이동
			while (1) {
				fgets(str, sizeof(str), fp);	// 파일 포인터에서 첫줄을 읽어옴
				if (feof(fp)) {
					break;
				}
				printf("%s", str);	// \n이 없는 이유는 텍스트파일 자체에 포함되어 있기 때문
			}
		}
		else {
			fprintf(fp, "%s\n", str);
		}
	}

	fclose(fp);

	printf("파일 처리 완료\n");

	return 0;
}