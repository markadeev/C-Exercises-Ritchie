//Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.

// create a histogram for all characters
// check ASCII table for character numbers
// figure out how to ignore UPPERCASE
// getchar() loop
// if [a : z] => ++array_histogram[c - 'a']
// if [A : Z] => ++array_histogram[c - 'A']
// print histogram
#include <stdio.h>
void histogram_printer(int arr[26]){
	for (int i = 0; i < 26; ++i){
		putchar(i+'a');
		for (int j = 0; j < arr[i]; ++j){
			putchar('|');
		}
		putchar('\n');
	}
}
int main() {
	int c;
	int array_histogram[26] = {0};
	while ((c = getchar()) != EOF){
		if (c >= 'a' && c <= 'z'){
			++array_histogram[c - 'a'];
		} else if (c >= 'A' && c <= 'Z'){
			++array_histogram[c - 'A'];
		}
	}
	histogram_printer(array_histogram);
	return 0;
}


