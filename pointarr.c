#include <stdio.h>

int main()
{
	int *p;
	printf("%p\n", p);
	printf("%p\n", p+1);
	printf("%p\n", p-1);
	printf("*p %lu\n", sizeof(*p));
	printf("p %lu\n", sizeof(p));
	char *s = "Byebyeworld\n";
	printf("%s", s);
	printf("%c\n", *s);
	printf("%c\n", *s+1);
	printf("%p\n", s);
	printf("%lu\n", sizeof(s));
	return 0;
}
