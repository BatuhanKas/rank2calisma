/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabmult.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:07:55 by bkas              #+#    #+#             */
/*   Updated: 2023/08/20 17:42:26 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi(char *str)
{
	int sign = 1;
	int res = 0;
	while (*str <= 32)
		str++;
	while (*str)
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}
void ft_putnbr(int c)
{
	if (c>=10)
		ft_putnbr(c/10);
	write(1, &"0123456789"[c%10], 1);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int a = atoi(argv[1]);
		int i = 1;
		int k = 0;
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(a);
			write(1, " = ", 3);
			k = i * a;
			ft_putnbr(k);
			k = 0;
			i++;
			write(1, "\n", 1);
		}
		return 0;
	}
	write(1, "\n", 1);
	return 0;
}