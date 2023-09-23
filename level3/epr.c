/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:56:06 by bkas              #+#    #+#             */
/*   Updated: 2023/08/08 20:04:45 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int space = 0;

        while (argv[1][i] == 32)
            i++;
        while (argv[1][i] != 0)
        {
            if (argv[1][i] != 32)
            {
                if (space == 1)
                {
                    write(1, " ", 1);
                    space = 0;
                }
                write(1, &argv[1][i], 1);
                i++;
            }
            else if (argv[1][i] == 32)
            {
                space = 1;
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}