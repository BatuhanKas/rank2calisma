/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:28:45 by bkas              #+#    #+#             */
/*   Updated: 2023/08/07 16:52:21 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int a = start;
    int b = end;
    int len = 0;
    int *res;

    if (start < end)
    {
        while (a <= b)
        {
            a++;
            len++;
        }
    }
    else if (start > end)
    {
        while (a >= b)
        {
            a--;
            len++;
        }
    }
    else
        res[len] = start;
    res = malloc(sizeof(int) * len);
    if (start < end)
    {
        while (start <= end)
        {
            res[i] = start;
            start++;
            i++;
        }
    }
    else if (start > end)
    {
        while (start >= end)
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return res;
}

int main()
{
    int *p = ft_range(1, 7);
    int i = 0;
    while (p[i])
    {
        printf("%d", p[i]);
        i++;
    }
}