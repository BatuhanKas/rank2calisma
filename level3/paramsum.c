/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:27:35 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 13:38:35 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int x)
{
    if (x > 9)
    {
        ft_putnbr(x / 10);
        ft_putnbr(x % 10);
    }
    if (x >= 0 && x <= 9)
    {
        x = x + 48;
        write(1, &x, 1);
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i = 1;
        int x = 0;

        while (argv[i])
        {
            i++;
            x++;
        }
        ft_putnbr(x);
    }
    if (argc == 1)
        write(1, "0", 1);
    write(1, "\n", 1);
    return 0;
}