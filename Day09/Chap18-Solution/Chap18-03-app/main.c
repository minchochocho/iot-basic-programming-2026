//파일 입출력2

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <windows.h>	// OS관련 또는 코드페이지 인코딩 해결


int main() {

	// 콘솔출력, 입력을 UTF-8(65001)로 고정하기 위한 설정
	//SetConsoleOutputCP(65001);	// 콘솔 출력 코드페이지 지정
	//SetConsoleCP(65001);			// 콘솔 자체 코드페이지 지정
	FILE* ifp, *ofp;

	// 텍스트 내 포맷에 맞춰서 변수 선언
	char name[20];
	int kor, eng, math;	// 국영수 점수
	int total;
	double avg;
	int res;	// 결과 반환값 저장

	ifp = fopen("./original.txt", "r");	// r모드는 파일이 없으면 실패!
	if (ifp == NULL) {
		printf("입력파일 오픈 실패!\n");
		//printf(u8"입력파일 오픈 실패!\n");	// 문자열을 utf8로 변환 출력
		exit(1);
	}

	ofp = fopen("./copy.txt", "w");	// w쓰기모드는 파일이 없으면 파일 생성
	if (ofp == NULL) {
		printf("입력파일 오픈 실패!\n");
		exit(1);
	}

	while (1) {
		// 입력 파일포인터에서 읽어서 한줄씩 각 변수에 할당
		res = fscanf(ifp,"%s%d%d%d",name, &kor,&eng,&math);
		if (res==EOF) {	// 파일 데이터의 마지막까지 다읽으면 EOF
			break;
		}
		total = kor + eng + math;
		avg = total / 3.0;

		printf("%s%5d%7.1f\n",name,total,avg);	// 콘솔에 출력
	}
	printf("파일 복사 완료\n");

	// 파일 포인터 해제
	fclose(ifp); fclose(ofp);

	return 0;
}