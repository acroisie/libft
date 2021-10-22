#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s", strcat(argv[1], argv[2]));
	}
	printf("\n");
	return (0);
}
