// 14장 3번 퀴즈

#include<stdio.h>
	

int main() {

	char mark[5][5] = { 0 };
	int i, j;

	for ( i = 0;i< 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			// 아래 수식만 수정하면 대각선, 별표, 테두리, 십자가 등 가능
			if (i==j||i+j==4)
			{
				mark[i][j] = 'X';
			}
		}

	}

	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) {
			if (mark[i][j]!=0)
			{
				printf("[%c]", mark[i][j]);

			}
			else {
				printf("[ ]");
			}

		}
		puts("");
	}

	return 0;
}