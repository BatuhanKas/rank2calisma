/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizbuzv2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:51:40 by bkas              #+#    #+#             */
/*   Updated: 2023/08/06 12:09:49 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int c)
{
	char x;
	if (c > 9)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	else if (c >= 0 && c <= 9)
	{
		x = c + 48;
		write(1, &x, 1);
	}
}

int	main(int argc, char **argv)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			write (1, "fizz", 4);
		}
		if (i % 5 == 0)
		{
			write (1, "buzz", 4);
		}
		else if(!(i % 3 == 0) && !(i % 5 == 0))
		{
			ft_putnbr(i);
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}