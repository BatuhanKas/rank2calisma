/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frrange.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:53:01 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 13:14:11 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int s = start;
	int e = end;
	int len = 0;
	int *res;
	
	if (s < e)
	{
		while (s <= e)
		{
			s++;
			len++;
		}
	}
	else
	{
		while (s >= e)
		{
			s--;
			len++;
		}
	}
	res = malloc(sizeof(int) * len);
	if (start < end)
	{
		while (start <= end)
		{
			res[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			res[i] = end;
			end++;
			i++;
		}
	}
	return res;
}
#include <stdio.h>
int main()
{
	int i = 0;
	int *x = ft_rrange(1, 5);
	while (x[i])
	{
		printf("%d, ", x[i++]);
	}
}