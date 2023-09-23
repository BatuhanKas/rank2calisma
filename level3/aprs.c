/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aprs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:36:59 by bkas              #+#    #+#             */
/*   Updated: 2023/08/21 11:46:52 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(int x)
{
	if (x >= 10)
		print(x / 10);
	write(1, &"0123456789"[x % 10], 1);
}

int primes(int c)
{
	int i = 2;

	if (c <= 1)
		return 0;
	while (i * i <= c)
	{
		if (c % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while (str[i])
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return res;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int tmp;
		int a = ft_atoi(argv[1]);

		while (a >= 0)
		{
			if (primes(a) == 1)
				tmp = tmp + a;
			a--;
		}
		print(tmp);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return 0;
}