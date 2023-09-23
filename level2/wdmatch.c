/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:21:17 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 13:05:14 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;
		int k = 0;
		int l = 0;
		char ptr[256] = "";

		while (argv[1][i] != 0 && argv[2][j] != 0)
		{
			if (argv[1][i] != argv[2][j])
				j++;
			else if (argv[1][i] == argv[2][j])
			{
				ptr[k] = argv[2][j];
				j++;
				k++;
				i++;
			}
		}
		ptr[k] = '\0';
		while(ptr[l])
		{
			write(1, &ptr[l], 1);
			l++;
		}
	}
	write (1, "\n", 1);
	return (0);
}