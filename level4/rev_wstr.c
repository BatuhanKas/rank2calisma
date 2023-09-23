/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:23:45 by bkas              #+#    #+#             */
/*   Updated: 2023/08/15 19:21:10 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int start;
        int end;
        int space = 0;

        while (argv[1][i] != 0)
            i++;
        i--;
        end = i;
        while (i >= 0)
        {
            while (argv[1][i] != 32 && i >= 0)
                i--;
            if (argv[1][i] == 32 || i == -1)
            {
                start = i + 1;
                space = 1;
            }
            while (start <= end)
                write(1, &argv[1][start++], 1);
            if (i != -1)
            {
                write(1, " ", 1);
                space = 0;
            }
            end = i - 1;
            i--;
        }
    }
    write(1, "\n", 1);
    return 0;
}