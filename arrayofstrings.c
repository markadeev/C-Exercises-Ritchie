#include <stdio.h>

int main(){
	char string[2][10] = {"hello","world"};
	char (*s)[10] = string;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			putchar(string[i][j]);
		}
		putchar('\n');
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%p\n",s[i]);
	}
	putchar(*s[0]+2);
	return 0;
}
