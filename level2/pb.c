/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:29:50 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 12:57:09 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 7;
	char arr[9];

	arr[8] = '\0';
	while(octet)
	{
		arr[i] = octet % 2 + '0';
		octet = octet / 2;
		i--;
	}
	while(i >= 0)
	{
		arr[i] = '0';
		i--;
	}
	i = 0;
	while(arr[i])
		write(1, &arr[i++], 1);
}

#include <stdio.h>

int main()
{
	int i = 134;
	printf("%d",reverse_bits(i));
}