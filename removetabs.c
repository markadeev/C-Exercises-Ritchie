// remove any tabs from stdio input until EOF
#include <stdio.h>
#define MAXBUFFER 1000
int main()
{
	int i = 0;
	char c;
	char line[MAXBUFFER] = {0};
	while ((c = getchar()) != EOF)
	{
		if (c != '\t')
		{
			line[i] = c;
			++i;
		}
	}
	printf("%s", line);
	return 0;
}
	


