//Exercise 1-12. Write a program that prints its input one word per line.

#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int STATE = 0;
	char c;
	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\t' || c == '\n'){
			STATE = OUT;
		} else if ( STATE == OUT ){
			STATE = IN;
			putchar('\n');
			putchar(c);
		} else {
			putchar(c);
		}
	}
	return 0;
}

