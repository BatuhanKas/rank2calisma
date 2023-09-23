#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int start;
		int end;
		int space = 0;
		
		while(argv[1][i] != 0)
			i++;
		i--;
		end = i;
		while(i >= 0)
		{
			while(argv[1][i] != 32 && i >= 0)
				i--;
			start = i + 1;
			if (argv[1][i] == 32)
				space = 1;
			while(start <= end)
				write(1, &argv[1][start++], 1);
			if (space == 1)
			{
				write(1, " ", 1);
				space = 0;
			}
			i--;
			end = i;
		}
	}
	write(1, "\n", 1);
	return 0;
}