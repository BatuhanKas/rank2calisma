/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:21:23 by bkas              #+#    #+#             */
/*   Updated: 2023/08/21 12:30:35 by bkas             ###   ########.fr       */
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
	while (str[i])
	{
		res[k] = (char *)malloc(sizeof(char) * 4096);
		while (str[i] && str[i] > 32)
			res[k][j++] = str[i++];
		res[k][j] = '\0';
		while (str[i] && str[i] <= 32)
			i++;
		j = 0;
		k++;
	}
	res[k] = 0;
	return res;
}