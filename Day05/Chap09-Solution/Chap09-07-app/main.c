//포인터 사용이유

#include<stdio.h>

int swap(int a, int b);

void p_swap(int* pa, int* pb);

int main() {
	int a = 10, b = 20;

	printf("원본 a, b = %d, %d\n", a, b);
	// a, b = swap(a, b);	// c에서는 두개에 한번에 넣을 수 없으므로 b에만 값이 들어감
	p_swap(&a, &b);
	printf("변경 후 a, b = % d, % d\n", a, b);


	return 0;
}

int swap(int a, int b) {
	int temp;	// 교환을 위한 임시 변수

	temp = a;	// temp = 10
	a = b;		// a = 20, b = 20
	b = a;		// b = 10
	return a, b;
}

void p_swap(int* pa, int* pb) {	// 주소를 보내므로 그 주소에 값을 넣으면 됨
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}
