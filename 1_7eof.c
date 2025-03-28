//Exercise 1-7. Write a program to print the value of EOF.
#include <stdio.h>

int main(){
	int a;
	a = getchar();
	while (a != EOF){
		putchar(a);
		a = getchar();
	}
	printf("%d\n",EOF);
	return 0;
}
