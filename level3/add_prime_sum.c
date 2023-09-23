/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:41:10 by bkas              #+#    #+#             */
/*   Updated: 2023/08/20 11:02:15 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while(str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return res;
}

void ft_putnbr(int c)
{
    int i = 0;
    
    if (c > 9)
    {
        ft_putnbr(c / 10);
        ft_putnbr(c % 10);
    }
    if (c >= 0 && c <= 9)
    {
        c = c + '0';
        write(1, &c, 1);
    }
}

int	is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int	nbr = ft_atoi(av[1]);
		int	tmp = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				tmp = tmp + nbr;
			nbr--;
		}
		ft_putnbr(tmp);
	}
	write(1, "\n", 1);
	return (0);
}
