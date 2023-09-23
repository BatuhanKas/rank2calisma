#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	if (argc > 1)
	{
		while (i < (argc))
		{
			while (argv[i][j])
			{
				if((argv[i][j] >= 'a' && argv[i][j] <= 'z'))
				{
					if(argv[i][j + 1] <= 32)
						argv[i][j] -= 32;
					write(1, &argv[i][j], 1);
					j++;
				}
				
				else if((argv[i][j] >= 'A' && argv[i][j] <= 'Z'))
				{
					if(!(argv[i][j + 1] <= 32))
						argv[i][j] += 32;
					write(1, &argv[i][j], 1);
					j++;
				}
				else
				{
					write(1, &argv[i][j], 1);
					j++;
				}
			}
			j = 0;
			i++;
			write(1, "\n", 1);
		}
	}
	write(1, "\n", 1);
}