/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pbs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:36:20 by bkas              #+#    #+#             */
/*   Updated: 2023/08/21 10:43:40 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 7;
	char arr[9];

	arr[8] = '\0';
	while (octet)
	{
		arr[i] = octet % 2 + '0';
		octet = octet / 2;
		i--;
	}
	while (i >= 0)
	{
		arr[i] = '0';
		i--;
	}
	i = 0;
	while (arr[i])
		write(1, &arr[i++], 1);
}

int main()
{
	print_bits(25);
	return 0;
}