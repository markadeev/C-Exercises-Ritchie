// copy input to output, all multiple blanks replace by single blank
#include <stdio.h>

int main(){
	char c;
	char d;
	int blank_count = 0;
	while ((c = getchar()) != EOF){
		if (c == ' '){
			++blank_count;
			if (blank_count == 1){
				printf(" ");
			}
			if (blank_count > 1){
				printf("");
			}
			if (blank_count > 1 & ((d = getchar()) != ' ')){
				blank_count = 0;
				printf("%c",d);
			}
		} else {
			printf ("%c", c);
		}


	}
	return 0;
}

