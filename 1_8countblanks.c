//Exercise 1-8. Write a program to count blanks, tabs, and newlines.
#include <stdio.h>

int main(){
	int n = 0;
	int blanks = 0;
	int tabs = 0;
	int newlines = 0;
	char c;
	for (n; (c = getchar()) != EOF; ++n){
		if  (c == ' '){
			++blanks;
		}
		if (c == '\t'){
			++tabs;
		}
		if (c == '\n'){
			++newlines;
		}
	}
	printf("\nblanks = %d\ttabs = %d\tnewlines = %d\n", blanks, tabs, newlines);
}
