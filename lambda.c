#include <stdio.h>

int main()
{
	int d = 0;
	printf("enter number:\n");
	scanf("%d", &d);
	printf("%s\n", (d >= 0) ? "positive" : "negative");
	return 0;
}
