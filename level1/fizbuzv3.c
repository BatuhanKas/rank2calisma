/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizbuzv3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:45:49 by bkas              #+#    #+#             */
/*   Updated: 2023/08/06 12:44:27 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int c)
{
	if (c >= 10)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	if (c >= 0 && c <= 9)
	{
		c = c + 48;
		write(1, &c, 1);
	}
}

int	main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write (1, "fizz\n", 5);
		else if (i % 5 == 0)
			write (1, "buzz\n", 5);
		else if (((i % 3 != 0) && (i % 5 != 0)))
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}