/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revbits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:33:48 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 13:00:04 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 7;
	unsigned char	res = 0;

	while (i >= 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}
