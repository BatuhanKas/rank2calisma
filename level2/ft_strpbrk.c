/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:15:42 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 10:50:20 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	
	if (!s1 || !s2)
		return 0;
	while(s1[i] != 0)
	{
	   	while(s2[j] != 0)
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

int main() {
    const char *s1 = "batuhan";
    const char *s2 = "eiou"; // Arama karakter kümesi

    char *result = ft_strpbrk(s1, s2);

    if (result != NULL) {
        printf("Arama karakterlerinden \"%c\" harfini buldum.\n", *result);
        printf("Bulunduğu konum: %ld\n", result - s1);
        printf("Eşleşen kısım: %s\n", result);
    } else {
        printf("Arama karakterlerinden hiçbiri mevcut değil.\n");
    }

    return 0;
}