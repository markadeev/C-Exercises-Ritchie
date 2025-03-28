/*Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the length of arbitrary
long input lines, and as much as possible of the text.*/

#include <stdio.h>
#include <stdlib.h>
void copy_line(char *maxl, char *newl);
int get_line(char **newl, char **maxl, int *bufsz);
int main(){
	int buffer_size = 100;
	char *max_line = (char*)malloc(buffer_size);
	char *new_line = (char*)malloc(buffer_size);
	int max_line_length = 0;
	int new_line_length = 0;
	while((new_line_length = get_line(&new_line, &max_line, &buffer_size)) > 0)
		if (new_line_length > max_line_length) {
			max_line_length = new_line_length;
			copy_line(max_line, new_line);
		}
	if (max_line_length > 0)
		printf("%d\n%s\n", max_line_length - 1, max_line);

	free(new_line);
	free(max_line);
	return 0;
}
void copy_line(char *maxl, char *newl){
	int i;
	i = 0;
	while ((maxl[i] = newl[i]) != '\0')
		++i;
}
int get_line(char **newl, char **maxl, int *bufsz){
	int i = 0;
	char c;
	char *newl_temp;
	char *maxl_temp;
	for (i; (c = getchar()) != EOF && c != '\n'; ++i){
		if (i >= *bufsz){
			bufsz += 100;
			char *newl_temp = realloc(*newl, *bufsz);
			if (newl_temp == NULL){
				free(*newl);
				perror("Unable to reallocate");
				exit(1);
			}
			char *maxl_temp = realloc(*maxl, *bufsz);
			if (maxl_temp == NULL){
				free(*maxl);
				perror("Unable to reallocate");
				exit(1);
			}
		*newl = newl_temp;
		*maxl = maxl_temp;
		}
	(*newl)[i] = c;
	}
	if (c == '\n'){
		(*newl)[i] = c;
		++i;
	}
	(*newl)[i] = '\0';
	return i;
}	
	
			

			



