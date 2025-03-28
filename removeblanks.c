#include <stdio.h>
#define MAXBUFFER 1000
#define IN 1
#define OUT 0

int main()
{
	int i = 0;
	char c;
	char line[MAXBUFFER] = {0};
	int state = OUT;
	int wordcount = 0;
	while ((c = getchar()) != EOF)
	{
		if (c >= 'A' && c <= 'z'){
			if (state == OUT)
			{
				state = IN;
				line[i] = c;
				++i;
			}
			if (state == IN)
			{
				line[i] = c;
				++i;
			}
		} else if (c == ' ' && state == IN)
		{
			state = OUT;
			line[i] = ' ';
			++wordcount;
			++i;
		} else if (c == '\n')
		{
			state = OUT;
			line[i] = '\n';
			++i;
		}
	}
	printf("%d\n", wordcount);
	printf("%s\n", line);
	return 0;
}




