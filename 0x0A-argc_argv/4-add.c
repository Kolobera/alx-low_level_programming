#include <stdlib.h>
#include <stdio.h>

/**
 */

int main(int argc, char **argv)
{
	int i, j, s = 0;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] == '-')
		{
			for (j = 1; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		else
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return(0);
}
