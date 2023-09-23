/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:23:51 by bkas              #+#    #+#             */
/*   Updated: 2023/08/01 12:54:59 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int i = 0;
	int tmp = tab[i];
	while (tab[i] && i < len)
	{
		if (tmp < tab[i])
			tmp = tab[i];
		i++;
	}
	return (tmp);
}

int	main()
{
	int tab[] = {100,2,101,4,5,6,7,99,9};
	printf("%d",max(tab,8));
}