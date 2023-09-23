/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:23:20 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 12:29:22 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int i = 0;
	int tmp = tab[i];

	while(i < len)
	{
		if (tmp < tab[i])
			tmp = tab[i];
		else
			i++;
	}
	return tmp;
}
#include <stdio.h>
int main()
{
	int x[] = {1, 31, 2, 9};
	printf("%d", max(x, 4));
}