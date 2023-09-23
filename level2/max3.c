/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:59:54 by bkas              #+#    #+#             */
/*   Updated: 2023/08/17 17:14:15 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		max(int* tab, unsigned int len)
{
	int i = 0;
	int cnt = tab[i];
	
	while (i < len)
	{
		if (cnt < tab[i])
			cnt = tab[i];
		i++;
	}
	return cnt;
}
int	main()
{
	int arr[5] = {10 , 3, 6, 82 , 4};
	printf("%d",max(arr, 5));
}