/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:11:37 by bkas              #+#    #+#             */
/*   Updated: 2023/08/18 19:42:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_hex(int i)
{
	if (i >= 16)
		ft_hex(i/16);
	write(1, &"0123456789abcdef"[i % 16], 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while (str[i])
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return res;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return 0;
}