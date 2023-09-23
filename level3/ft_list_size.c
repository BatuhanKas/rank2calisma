/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:59:40 by bkas              #+#    #+#             */
/*   Updated: 2023/08/21 12:08:22 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i = 0;

	if (begin_list == 0)
		return 0;
	else
	{
		while (begin_list)
		{
			begin_list = begin_list->next;
			i++;
		}
		return(i);
	}
}
