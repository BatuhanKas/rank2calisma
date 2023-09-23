/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:56:44 by bkas              #+#    #+#             */
/*   Updated: 2023/08/06 14:39:59 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		int i = 0;
		int x = atoi(argv[1]);
		int y = atoi(argv[3]);
		int res = 0;
		
		if ((argv[1][i] && argv[3][i]) && argv[2][i])
		{
			if(argv[2][i] == '*')
			{
				res = x * y;
			}
			if(argv[2][i] == '/')
			{
				res = x / y;
			}
			if(argv[2][i] == '+')
			{
				res = x + y;
			}
			if(argv[2][i] == '-')
			{
				res = x - y;
			}
			if(argv[2][i] == '%')
			{
				res = x % y;
			}
		}
		printf("%d", res);
	}
	printf("\n");
	return 0;
}
