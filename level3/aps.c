/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aps.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:02:30 by bkas              #+#    #+#             */
/*   Updated: 2023/08/20 17:00:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while (str[i])
		res = (res * 10) + str[i++] - '0';
	return res;
}

void ft_printf(int x)
{
	if (x >= 10)
		ft_printf(x/10);
	write(1, &"0123456789"[x % 10], 1);
}

int prime(int a)
{
	int i = 2;
	if (a <= 1)
		return 0;
	while (i * i <= a)
	{
		if (a % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int x = ft_atoi(argv[1]);
		int tmp = 0;

		while (x > 0)
		{
			if (prime(x) == 1)
				tmp = tmp + x;
			x--;
		}
		ft_printf(tmp);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return 0;
}