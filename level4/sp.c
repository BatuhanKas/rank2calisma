/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:07:11 by bkas              #+#    #+#             */
/*   Updated: 2023/08/21 12:29:35 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **res;

	while (str[i] && str[i] <= 32)
		i++;
	res = (char **)malloc(sizeof(char) * 256);
	while(str[i])
	{
		res[k] = (char *)malloc(sizeof(char) * 4096);
		while (str[i] && str[i] > 32)
			res[k][j++] = str[i++];
		res[k][j] = '\0';
		while(str[i] && str[i] <= 32)
			i++;
		k++;
		j = 0;
	}
	res[k] = '\0';
	return res;
}