/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phex.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:38:44 by bkas              #+#    #+#             */
/*   Updated: 2023/08/20 16:58:35 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void hex(int c)
{
	if (c >= 16)
		hex(c/16);
	write(1, &"0123456789abcdef"[c % 16], 1);
}

int atoi(char *str)
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
		hex(atoi(argv[1]));
	write(1, "\n", 1);
	return 0;
}