/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:22:55 by bkas              #+#    #+#             */
/*   Updated: 2023/08/15 18:47:08 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int k = 1;
        int start;
        int end;
        int space = 0;

        while (argv[1][i] == 32)
            i++;
        while (argv[1][i] != 32)
        {
            if (k == 1)
            {
                start = i;
                k = 0;
            }
            i++;
        }
        if (argv[1][i] == 32)
        {
            end = i - 1;
        }
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
            if (argv[1][i] == 0)
                space = 1;
        }
        if (argv[1][i] == '\0')
        {
            if (space == 1)
                write(1, " ", 1);
            while (start <= end)
                write(1, &argv[1][start++], 1);
        }
        write(1, "\n", 1);
        return 0;
    }
    else if (argc > 1)
    {
        int m = 0;
        while (argv[1][m])
            write(1, &argv[1][m++], 1);
        write(1, "\n", 1);
        return 0;
    }
    write(1, "\n", 1);
    return 0;
}