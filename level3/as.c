/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   as.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:28:39 by bkas              #+#    #+#             */
/*   Updated: 2023/08/20 11:39:49 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi(char *str)
{
	int i = 0, res = 0;
	while (str[i])
		res = (res * 10) + str[i++] - '0';
	return res;
}
void print(int a)
{
	if(a >= 10)
		print(a / 10);
	write(1, &"0123456789"[a % 10], 1);
}
int prime(int i)
{
	int a = 2;
	if (i <= 1)
		return 0;
	while (a * a <= i)
	{
		if (i % a == 0)
			return 0;
		a++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int x = atoi(argv[1]);
		int tmp = 0;
		while (x > 0)
		{
			if (prime(x) == 1)
				tmp = tmp + x;
			x--;
		}
		print(tmp);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return 0;
}