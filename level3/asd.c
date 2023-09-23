/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:04:46 by bkas              #+#    #+#             */
/*   Updated: 2023/08/21 11:35:41 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return c;
}

int get_gidit123(char c, int basedigit)
{
	int maxdigit = 0;
	if (basedigit <= 10)
		maxdigit = basedigit + '0' - 1;
	else
		maxdigit = basedigit - 10 + 'a' - 1;
	if (c >= '0' && c <= '9' && c <= maxdigit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= maxdigit)
		return (10 + c - 'a');
	else
		return -1;
}

int	ft_atoi_base(const char *str, int str_base)
{
	int digit = 0;
	int sign = 1;
	int res = 0;

	if (*str == '-')
	{
		sign = -1;
		
		str++;
	}
	while ((digit = get_gidit123(to_lower(*str), str_base)) >= 0)
	{
		res = (res * str_base) + digit;
		str++;
	}
	return (res * sign);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_atoi_base("2b", 16));
}