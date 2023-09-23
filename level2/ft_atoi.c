/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:12:44 by bkas              #+#    #+#             */
/*   Updated: 2023/08/21 10:44:59 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int pn = 1;

	while ((str[i] == 32) || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-')
		pn = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * pn);
}
#include <stdio.h>
int	main()
{
	printf("%d", ft_atoi("--1234"));
}