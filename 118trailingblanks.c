// Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines
// get single line
// redact the line
// if length > 1 store redacted line
// print stored lines
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int get_line();
void edit_line();
void store_line();

int main()
{
	int line_count = 0;
	char *new_line = NULL;
	char **line_storage = NULL;
	while(line_count < 10)
	{
		if (get_line() > 1)
		{
			edit_line();
			if (strlen(new_line) > 
			store_line();
		}

