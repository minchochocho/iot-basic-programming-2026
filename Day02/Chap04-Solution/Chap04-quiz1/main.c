#include<stdio.h>

int main() {
	int res;

	res = sizeof(short) > sizeof(long);
	printf("%s", (res == 1) ? "short" : "long");	// res가 1이면 short 아니면 long

	return 0;
}