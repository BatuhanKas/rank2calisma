/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uni.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:14:08 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 11:24:21 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check (char c, char *str, int len)
{
	int i = 0;

	while (i < len)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		
		while (argv[1][i])
			i++;
		while (argv[2][j])
			argv[1][i++] = argv[2][j++];
		i = 0;
		while (argv[1][i])
		{
			if (check(argv[1][i], argv[1], i) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}