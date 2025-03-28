//Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
#include <stdio.h>
#include <stdlib.h>
#define LOWER_LIMIT 80

int get_line(char **p_newl, int *bufsize);
void store_lines(char ***longlns, int *linecnt, int *storagesz, char *newl);

int main(){
	int buffer_size = 100;
	int new_line_length = 0;
	char *new_line = (char*)calloc(buffer_size, sizeof(char));
	if (new_line == NULL)
	{
		perror("new_line memory allocation error\n");
		exit(1);
	}
	char **long_lines = NULL;
	int long_line_count = 0;
	int storage_size = 10;
	long_lines = (char**)calloc(storage_size, sizeof(char*));
	if (long_lines == NULL)
	{
		perror("long_lines memory allocation error\n");
		//free(long_lines);
		exit(1);
	}
	while (long_line_count < 10) {
	       	new_line_length = get_line(&new_line, &buffer_size);
		if (new_line_length == 0){
			break;
		}
		if (new_line_length > LOWER_LIMIT){
			store_lines(&long_lines, &long_line_count, &storage_size, new_line);
			new_line = (char*)calloc(buffer_size, sizeof(char));
		} 
	}
	// print all long lines
	printf("Lines longer than 80 characters:\n");
	for (int i = 0; i < long_line_count; i++){
		printf("%s\n", long_lines[i]);
		free(long_lines[i]);
	}
		
	free(long_lines);
	free(new_line);
	return 0;
}
int get_line(char **p_newl, int *bufsize){
	int i = 0;
	char c;
	while ((c = getchar()) != EOF && c != '\n'){
		if (i >= *bufsize - 1){
			*bufsize+= 100;
			char *temp = (char*)realloc(*p_newl, *bufsize * sizeof(char));
			if (temp == NULL){
				perror("temp memory allocation error\n");
				exit(1);
			}
		*p_newl = temp;
		}
	(*p_newl)[i] = c;
	++i;
	}
	if (c == '\n'){
		(*p_newl)[i] = '\n';
		++i;
	}
	(*p_newl)[i] = '\0';
	return i;
}
void store_lines(char ***longlns, int *linecnt, int *storagesz, char *newl){
	if (*linecnt >= *storagesz - 1)
	{
		*storagesz += 10;
		char **temp = (char**)realloc(*longlns, *storagesz * sizeof(char*));
		if (temp == NULL)
		{
			perror("temp memory reallocation error\n");
			exit(1);
		}
		*longlns = temp;
	}
	(*longlns)[*linecnt] = newl;
	*linecnt += 1;
}




	
