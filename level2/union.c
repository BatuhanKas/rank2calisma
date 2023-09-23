/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:01:24 by bkas              #+#    #+#             */
/*   Updated: 2023/08/01 15:00:29 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *str, char c, int j)
{
	int i= 0;
	while(str[i] && i < j)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int check2(char *str, char c)
{
	int i= 0;
	while(str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int j = 0;
	int k = 0;

	if (argc == 3)
	{
		while (argv[1][j] != 0)
		{
			if (check(argv[1],argv[1][j],j))
			{
				write(1,&argv[1][j],1);
			}
			j++;
		}
		while (argv[2][k] != 0)
		{
			if (check(argv[2],argv[2][k],k))
			{
				if (check2(argv[1],argv[2][k]))
					write(1,&argv[2][k],1);
			}
			k++;
		}
	}
	write(1, "\n", 1);
}