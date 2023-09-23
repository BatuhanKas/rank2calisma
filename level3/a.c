/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:23:06 by bkas              #+#    #+#             */
/*   Updated: 2023/08/20 15:51:49 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return c;
}

int get_digit(char c, int basedigit)
{
	int maxdigit = 0;
	if (basedigit <= 10)
		maxdigit = basedigit + '0';
	else
		maxdigit = basedigit - 10 + 'a';
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= maxdigit)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		res = (res * str_base) + digit;
		str++;
	}
	return (sign * res);
}

int main()
{
	printf("%d", ft_atoi_base("2a", 16));
}