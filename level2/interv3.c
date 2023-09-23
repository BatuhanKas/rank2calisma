/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interv3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:36:31 by bkas              #+#    #+#             */
/*   Updated: 2023/08/16 11:51:11 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c, char *str, int len)
{
	int i = 0;
	
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
	int j = 0;

	if (argc == 3)
	{
		while(argv[1][i])
		{
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j])
				{
					if(check(argv[1][i], argv[1], i) == 1)
					{
						write(1, &argv[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
			j = 0;
		}
	}
	write(1, "\n", 1);
	return 0;
}