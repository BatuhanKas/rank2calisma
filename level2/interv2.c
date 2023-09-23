/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interv2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:13:22 by bkas              #+#    #+#             */
/*   Updated: 2023/08/07 11:46:53 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char c, char *str, int len)
{
	int i = 0;
	if(len == -1)
	{
		while(str[i])
		{
			if (str[i] == c)
				return (1);
			i++;
		}
		return (0);
	}
	while(i < len)
	{
		if(str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int	main(int argc, char **argv)
{
	int i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (check(argv[1][i],argv[2],-1))
			{
				if(check(argv[1][i], argv[1], i) == 1)
				{
					write(1, &argv[1][i], 1);
				}
			}
			i++;
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}