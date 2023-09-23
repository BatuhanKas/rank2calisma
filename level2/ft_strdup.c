/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:51:43 by bkas              #+#    #+#             */
/*   Updated: 2023/08/01 10:13:27 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	char *str;

	while (src[i] != 0)
		i++;
	str = malloc((len + 1) * sizeof(*str));
	if (str != 0)
	{
		while (src[i])
		{
			str[i] = src[i];
			i++;
		}
		src[i] = '\0';
	}
	return (src);
}

int	main()
{
	char s1[] = "batuhan";
	printf("%s", ft_strdup(s1));
}