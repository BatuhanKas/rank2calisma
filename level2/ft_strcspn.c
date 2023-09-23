/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:24:01 by bkas              #+#    #+#             */
/*   Updated: 2023/08/09 12:32:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		while (reject[j] != 0)
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (i);
}

int	main()
{
	char dizi1[] = "batuha,n";
	char ara[] = "!.,";
	printf("%zu", ft_strcspn(dizi1, ara));
	return 0;
}