/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:47:02 by bkas              #+#    #+#             */
/*   Updated: 2023/08/21 11:55:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(int i)
{
	if(i >= 10)
		print(i / 10);
	write(1, &"0123456789"[i%10], 1);
}

int atoi(char *c)
{
	int i = 0, res = 0;
	while (c[i])
	{
		res = (res * 10) + c[i] - '0';
		i++;
	}
	return res;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 1;
		int a = atoi(argv[1]);
		int k = 0;
		while (i <= 9)
		{
			print(i);
			write(1, " x " ,3);
			print(a);
			write(1, " = " ,3);
			k = i * a;
			print(k);
			k = 0;
			write(1, "\n", 1);
			i++;
		}
		return 0;
	}
	write(1, "\n", 1);
	return 0;
}