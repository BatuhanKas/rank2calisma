/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 10:53:09 by bkas              #+#    #+#             */
/*   Updated: 2023/08/21 11:01:49 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int n = 0;
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		if (a < b)
			n = a;
		else
			n = b;
		while (n >= 0)
		{
			if (a % n == 0 && b % n == 0)
			{
				printf("%d", n);
				return 0;
			}
			else
				n--;
		}
	}
	printf("\n");
	return 0;
}