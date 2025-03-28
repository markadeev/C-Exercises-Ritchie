#include <stdio.h>
int sum(int a, int b)
{
	return a + b;
}
int mult(int a, int b)
{
	return a * b;
}
int operation(int (*op)(int, int), int a, int b)
{
	return (*op)(a, b);
}
	
int main()
{
	printf("%d\n", operation(&sum, 3, 4));
	printf("%d\n", operation(&mult, 3, 4));
	return 0;
}
	
	
