/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ralpha.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:08:03 by bkas              #+#    #+#             */
/*   Updated: 2023/08/16 10:17:57 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int x = 0;
		int k = 0;
		while (argv[1][i] != 0)
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				x = argv[1][i] - 97 + 1;
				while (k < x)
				{
					write(1, &argv[1][i], 1);
					k++;
				}
				k = 0;
				x = 0;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				x = argv[1][i] - 65 + 1;
				while (k < x)
				{
					write(1, &argv[1][i], 1);
					k++;
				}
				k = 0;
				x = 0;
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}