// 문자

#include<stdio.h>

int main() {
	char small, cap = 'G';

	if (cap >='A'&& cap<='Z')
	{
		// cap += 32;
		cap +=('a' - 'A');
	}
	printf("%c", cap);
	return 0;
}