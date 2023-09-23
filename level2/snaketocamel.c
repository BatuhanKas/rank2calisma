/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snaketocamel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:16:56 by bkas              #+#    #+#             */
/*   Updated: 2023/08/01 13:25:49 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if (argc == 2)
	{
		while (argv[i][j] != 0)
		{
			if(argv[i][j] != '_')
				write(1, &argv[i][j], 1);
			else if(argv[i][j] == '_')
			{
				j++;
				argv[i][j] = argv[i][j] - 32;
				write(1, &argv[i][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}