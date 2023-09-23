/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbits.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:59:08 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 13:13:05 by bkas             ###   ########.fr       */
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
