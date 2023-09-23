/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:58:13 by bkas              #+#    #+#             */
/*   Updated: 2023/08/07 14:04:45 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;

        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                if(argv[1][i] != 'z')
                    argv[1][i] = argv[1][i] + 1;
                else
                    argv[1][i] = argv[1][i] - 25;
                write(1, &argv[1][i], 1);
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                if(argv[1][i] != 'Z')
                    argv[1][i] = argv[1][i] + 1;
                else
                    argv[1][i] = argv[1][i] - 25;
                write(1, &argv[1][i], 1);
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}