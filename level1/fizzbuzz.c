#include <unistd.h>

void	ft_putnbr(int c)
{
	int	j;

	if (c > 9)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	if (c <= 9)
	{
		j = c + 48;
		write (1, &j, 1);
	}
}

int	main()
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0)
		{
			write (1, "fizz", 4);
		}
		if (i % 5 == 0)
		{
			write (1, "buzz", 4);
		}
		if (!(i % 3 == 0) && !(i % 5 == 0))
		{
			ft_putnbr(i);
		}
		i++;
		write (1, "\n", 1);
	}
}
