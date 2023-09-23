/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rangev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:44:24 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 13:14:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int     *ft_range(int start, int end)
{
	int a = start;
	int b = end;
	int c = 0;
	int *arr;
	int i = 0;

	if(a < b)
	{	
		while(a <= b)
		{
			a++;
			c++;
		}
	}
	else if(a > b)
	{	
		while(a >= b)
		{
			a--;
			c++;	
		}
	}
	else
		arr[c] = start;
	arr = malloc(sizeof(int) * c);
	c = 0;
	if(start < end)
	{
		while(start <= end)
		{
			arr[c++] = start++;
		}
	}
	else if(start > end)
	{	
		while(start >= end)
		{
			arr[c++] = start--;
		}
	}

	return(arr);	
}

int	main()
{
	int i = 0;
	int start = 0;
	int end	= -5;
	int *arr;

	arr = ft_range(start,end);
	while (i < 6)
	{
		printf("%d", arr[i++]);
	}
}