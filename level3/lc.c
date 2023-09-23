/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:33:40 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 13:38:32 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int n;

	if (a == 0 || b == 0)
		return 0;
	if (a < b)
		n = b;
	else 
		n = a;
	while (1)
	{
		if (n % a == 0 & n % b == 0)
			return n;
		n++;
	}
}
#include <stdio.h>

int main()
{
	printf("%d", lcm(0,2));
}