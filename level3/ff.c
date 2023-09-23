/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ff.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:40:49 by bkas              #+#    #+#             */
/*   Updated: 2023/08/20 11:56:13 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int s = start;
	int e = end;
	int len = 0;
	int *dizi;

	if (s < e)
	{
		while (s <= e)
		{
			s++;
			len++;
		}
	}
	else if (s >= e)
	{
		while (s >= e)
		{
			s--;
			len++;
		}
	}
	dizi = malloc(sizeof(int) * len);
	if (start < end)
	{
		while (start <= end)
		{
			dizi[i] = end;
			end--;
			i++;
		}
	}
	else if (start >= end)
	{
		while (start >= end)
		{
			dizi[i] = end;
			end++;
			i++;
		}
	}
	return dizi;
}
#include <stdio.h>
int main()
{
	int x = 0;
	int *p = ft_rrange(0,-5);
	while (p[x])
		printf("%d, ", p[x++]);
}