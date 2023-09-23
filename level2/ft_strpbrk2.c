/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:51:31 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 10:50:45 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	
	if (!s1 || !s2)
		return 0;
	while (s1[i] != 0)
	{
		while (s2[j] != 0)
		{
			if(s1[i] == s2[j])
				return (char *)&s1[i];
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

int	main()
{
	char dizi1[] = "batuhan";
	char dizi2[] = "h";
	char *res = ft_strpbrk(dizi1, dizi2);
	printf("%s", res);
}