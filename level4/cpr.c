/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:52:38 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 18:13:43 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 2;
		int a = atoi(argv[1]);

		if (a == 1)
			printf("1");

		while (i <= a)
		{
			if (a % i == 0)
			{
				a = a / i;
				printf("%d",i);
				if (a != 1)
					printf("*");
			}
			else
				i++;
		}
	}
	printf("\n");
	return 0;
}