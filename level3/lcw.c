/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcw.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:07:07 by bkas              #+#    #+#             */
/*   Updated: 2023/08/21 11:03:57 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int x;
	
	if (a == 0 || b == 0)
		return 0;
	if (a < b)
	{
		x = b;
	}
	else
		x = a;
	while (1)
	{
		if (x % a == 0 && x % b == 0)
			return x;
		x++;
	}
}
#include <stdio.h>
int main()
{
	printf("%d", lcm(6,4));
}