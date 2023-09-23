/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:36:18 by bkas              #+#    #+#             */
/*   Updated: 2023/08/16 13:03:02 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int len = 0;
	int tmp = start;
	int cnt = start;

	if (start < end)
	{
		while(tmp <= end)
		{
			tmp++;
			len++;
		}
	}
	else
	{
		while (tmp >= end)
		{
			tmp--;
			len++;
		}
	}
	int *res = (int *)malloc(sizeof(int) * len);
	if (start < end)
	{
		while (cnt <= end)
			cnt++;
		cnt--;
		while (cnt >= start)
		{
			res[i] = cnt;
			i++;
			cnt--;
		}
	}
	else if (start >= end)
	{
		while (cnt >= end)
			cnt--;
		cnt++;
		while (cnt <= start)
		{
			res[i] = cnt;
			i++;
			cnt++;
		}
	}
	return (res);
}

int	main()
{
	int i = 0;
	int *p = ft_rrange(-3,6);
	while (i < 10)
	{
		printf("%d,", p[i]);
		i++;
	}
}