// 주소록 프로그램 step 8
#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>
#include<stdio.h>

#include "addressbook.h"


#pragma region 메인함수 영역

static void clear_screen() {
	system("cls");	// 화면 클리어
}

static void pause_enter() {
	puts("\n계속하려면 Enter...");
	getchar();
}

int main() {
	int choice = 0;

	if (!ab_init()) {
		puts("메모리 할당에 실패하여 프로그램을 종료합니다.");
		return -1;
	}

	load_contacts("contacts.txt");	// 프로그램 실행 후 데이터 로드!

	while (1) {	// 무한루프
		clear_screen();
		print_menu();	// 메뉴를 출력
		choice = read_menu();	// choice 값에 입력을 받음

		switch (choice) {
		case 1:
			//printf("%s\n", "[ADD] 연락처 추가 (기능 구현요)");
			add_contact();		// 실제 연락처 추가
			break;

		case 2:
			//puts("[LIST] 연락처 목록");
			list_contact();
			break;

		case 3:
			//puts("[SEARCH] 연락처 검색");
			search_contact();
			break;

		case 4:
			//puts("[EDIT] 연락처 수정");
			update_contact();
			break;

		case 5:
			//puts("[DELETE] 연락처 삭제");
			delete_contact();
			break;

		case 6:
			//puts("정렬");
			sort_by_name();
			break;

		case 7:
			save_contacts("contacts.txt");	// 종료 직전 현재 데이터 저장
			ab_free();	// 반드시 메모리 해제
			puts("프로그램 종료");
			return 0;

		default:
			puts("메뉴는 1~7 사이 입니다.");
			break;
		}

		pause_enter();

	}

	return 0;

}
#pragma endregion

