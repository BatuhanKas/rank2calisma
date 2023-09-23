/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:56:04 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 17:06:34 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int n = nbr;
	int len;
	char *arr;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	arr = malloc(sizeof(char) * len + 1);
	if (arr == NULL)
		return NULL;
	arr[len] = '\0';
	if (nbr == 0)
	{
		arr[0] = '0';
		return arr;
	}
	if (nbr < 0)
	{
		arr[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		arr[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return arr;
}

#include <stdio.h>

int main()
{
	int x = 3461;
	printf("%s", ft_itoa(x));
}