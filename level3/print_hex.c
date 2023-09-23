/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:03:13 by bkas              #+#    #+#             */
/*   Updated: 2023/08/16 13:15:31 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_hex(int n)
{
	if (n >= 16)
		to_hex(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int 	atoi(char *c)
{
	int i = 0;
	int res = 0;
	while (c[i])
	{
		res = (res * 10) + c[i] - '0';
		i++;
	}
	return res;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		to_hex(atoi(argv[1]));
	}
	write(1, "\n", 1);
	return 0;
}
