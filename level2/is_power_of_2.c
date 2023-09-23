/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:05:43 by bkas              #+#    #+#             */
/*   Updated: 2023/08/17 13:08:51 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n >= 1)
	{
		while (n)
		{
			if (n % 2 == 0)
				n = n / 2;
			else if (n == 1)
				return (1);
			else
				return (0);
		}
	}
	return (0);
}

int	main()
{
	printf("%d", is_power_of_2(4));
}