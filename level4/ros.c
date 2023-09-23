/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ros.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:54:16 by bkas              #+#    #+#             */
/*   Updated: 2023/08/17 16:33:39 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int start;
		int end;
		int space = 0;

		while (argv[1][i] == 32)
			i++;
		start = i;
		while (argv[1][i] != 32)
			i++;
		end = i - 1;
		while (argv[1][i] == 32)
			i++;
		while (argv[1][i] != 0)
		{
			if (argv[1][i] != 32)
			{
				if (space == 1)
				{
					write(1, " ", 1);
					space = 0;
				}
				write(1, &argv[1][i++], 1);
			}
			else
			{
				space = 1;
				i++;
			}
			if (argv[1][i] == 0)
				space = 1;
		}
		while (argv[1][i] == 0)
		{
			if (space == 1)
				write(1, " ", 1);
			while (start <= end)
				write(1, &argv[1][start++], 1);
		}
	}
	if (argc > 2)
	{
		int i = 0;
			
		while (argv[1][i] != 0)
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
}