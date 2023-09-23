/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:37:37 by bkas              #+#    #+#             */
/*   Updated: 2023/08/20 18:44:30 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 1;
        int j = 0;
        int k = 1;
        int space = 0;
        int start;
        int end;
        while (argv[i][j] == 32)
            j++;
        while (argv[i][j] != 32)
        {
            if (k == 1)
            {
                start = j;
                k = 0;
            }
            j++;
        }
        end = j - 1;
        while (argv[i][j] == 32)
            j++;
        while (argv[i][j] != 0)
        {
            if (argv[i][j] != 32)
            {
                if (space == 1)
                {
                    write(1, " ", 1);
                    space = 0;
                }
                write(1, &argv[i][j], 1);
                j++;
            }
            else
            {
                space = 1;
                j++;
            }
            if (argv[i][j] == '\0')
                space = 1;
        }
        while (start <= end)
        {
            if (space == 1)
            {
                write(1, " ", 1);
                space = 0;
            }
            write(1, &argv[i][start++], 1);
        }
        write(1, "\n", 1);
        return 0;
    }
    if (argc > 2)
    {
        int x = 0;
        while (argv[1][x])
            write(1, &argv[1][x++], 1);
        write(1, "\n", 1);
        return 0;        
    }
    if (argc == 1)
    {
        write(1, "\n", 1);
        return 0;
    }
}