/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:02:56 by bkas              #+#    #+#             */
/*   Updated: 2023/08/07 20:27:21 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len = 0;
	int tmp = start;
	if(start < end)
	{
		while(tmp <= end)
		{
			tmp++;
			len++;
		}
	}
	else
	{
		while(tmp >= end)
		{
			tmp--;
			len++;
		}
	}						
	int *res = (int *)malloc(sizeof(int) * len);
	if(start < end)
	{
		while(start <= end)
		{
			res[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while(start >= end)
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);
}

int	main()
{
	int *p = ft_range(1, 5);
	int i = 0;
	while(p[i])
		printf("%d,",p[i++]);
}