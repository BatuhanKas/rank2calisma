/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_wordv2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:26:33 by bkas              #+#    #+#             */
/*   Updated: 2023/08/17 17:04:59 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] <= 32)
			i++;
		while ((argv[1][i]) && (argv[1][i] <= 32))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return 0;
}