/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:17:53 by bkas              #+#    #+#             */
/*   Updated: 2023/08/16 11:55:55 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char c, char *str, int len)
{
	int i = 0;
	
	while(i < len)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return  1;
}

int main(int argc, char **argv)
{	
	int i = 0;
	int j = 0;
	int k = 0;
	
	if (argc == 3)
	{
		while(argv[1][i] != '\0')
			i++;
		while(argv[2][j] != '\0')
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		while(k < i)
		{
			if(check(argv[1][k], argv[1], k) == 1)
				write (1, &argv[1][k], 1); 
			k++;
		}
	}
	write (1, "\n", 1);
}