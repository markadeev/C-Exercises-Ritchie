/*Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the
histogram with the bars horizontal; a vertical orientation is more challenging.*/
// count length of a word
// add add each number to the array
// visualize array into a histogram

#include <stdio.h>
#define IN 1
#define OUT 0
int main(){
	int character;
	int state = 0;
	int word_length = 0;
	int histogram_array[20] = {0};
	int array_size = 0;

	while ((character = getchar()) != EOF){
		if (character == ' ' || character == '\t' || character == '\n' ) {
			state = OUT;
			if (word_length < 20){
				++histogram_array[word_length];
			}
			word_length = 0;
		} else if (state == OUT){
			state = IN;
			++word_length;
		} else if (state == IN){
			++word_length;
		}
	}

	array_size = sizeof(histogram_array)/sizeof(histogram_array[0]);

	for (int i = 0; i < array_size; ++i){
		printf("%d\t", i);

		for (int j = 0; j < histogram_array[i]; ++j){
			putchar('#');
			}

		putchar('\n');
		}
	
	return 0;
}

