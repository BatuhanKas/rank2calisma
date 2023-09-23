#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 2;
		int a = atoi(argv[1]);
		if (a == 1)
			printf("1");
		else
		{
			while (i <= a)
			{
				if((a % i) == 0)
				{
					a = a / i;
					printf("%d", i);
					if(a != 1)
						printf("*");
				}
				else
					i++;
			}
		}
		printf("\n");
		return 0;
	}
	printf("\n");
	return 0;
}