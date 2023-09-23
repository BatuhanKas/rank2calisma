/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:50:07 by bkas              #+#    #+#             */
/*   Updated: 2023/08/20 16:09:43 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return c;
}

int getdigit(char c, int basedigit)
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
	int digit = 0;
	int sign = 1;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((digit = getdigit(to_lower(*str), str_base)) >= 0)
	{
		res = (res * str_base) + digit;
		str++;
	}
	return (res * sign);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi_base("2a", 16));
}