#include <stdio.h>

int main()
{
	int *p;
	for (int i = 0; i < 1000; i++)
	{
		printf("%p\n", p+i);
		printf("%zu\n",*p+i);
	}

	return 0;
}
