/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ipo2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:04:29 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 12:38:36 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	if (n <= 0)
		return 0;
	if (n == 1)
		return 1;
	while (1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			if (n == 1)
				return 1;
		}
		else if (n % 2 != 0)
			return 0;
	}
}
#include <stdio.h>
int main()
{
	int i = 1;
	printf("%d", is_power_of_2(i));
}