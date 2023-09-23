/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostringv2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:58:04 by bkas              #+#    #+#             */
/*   Updated: 2023/08/03 15:10:20 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 1)
		write(1, "\n", 1);
	if (ac > 1)
	{
		int i = 0;
		int flag = 0;
		int start;
		int end;
		while (av[1][i] > 0 && av[1][i] <= 32)
			i++;
		start = i;
		while (av[1][i] > 32)
			i++;
		end = i - 1;
		while (av[1][i] > 0 && av[1][i] <= 32)
			i++;
		while (av[1][i] != 0)
		{
			if (av[1][i] > 32)
			{
				write(1,&av[1][i],1);
				flag = 0;
			}
			if (flag == 1)
			{
				write(1," ",1);
				while (av[1][i] <= 32 && av[1][i])
					i++;
				flag = 0;
			}
			else
				flag = 1;
			i++;
		}
		if (av[1][i] == 0)
		{
			write(1, " ", 1);
			i++;
		}
		while (start < end)
		{
			write(1,&av[1][start++],1);
		}
	}
}