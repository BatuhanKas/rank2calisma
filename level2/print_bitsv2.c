/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bitsv2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:36:37 by bkas              #+#    #+#             */
/*   Updated: 2023/09/18 17:02:08 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i;
    char arr[9];

	i = 7;
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

int main()
{
    print_bits(25);
    return (0);
}