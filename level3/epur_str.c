/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:08:22 by bkas              #+#    #+#             */
/*   Updated: 2023/08/16 12:21:32 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int space = 0;

	if (argc == 2)
	{
		while (argv[1][i] == 32)
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != 32)
			{
				if (space == 1)
					write(1, " ", 1);
				write (1, &argv[1][i], 1);
				space = 0;
				i++;
			}
			if (argv[1][i] == 32)
			{
				space = 1;
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}