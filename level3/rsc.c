/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:54:25 by bkas              #+#    #+#             */
/*   Updated: 2023/08/19 18:13:20 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i = 1;
		int j = 0;
		
		while (argv[i])
		{
			while(argv[i][j])
			{
				if ((argv[i][j] != 32 && argv[i][j+1] == 32) || argv[i][j+1] == '\0')
				{
					if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					{
						argv[i][j] -= 32;
						write(1, &argv[i][j++], 1);
					}
					else 
						write(1, &argv[i][j++], 1);
				}
				else if (argv[i][j] != 32 && argv[i][j+1] != 32)
				{
					if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					{
						argv[i][j] += 32;
						write(1, &argv[i][j++], 1);
					}
					else 
						write(1, &argv[i][j++], 1);
				}
				else
					write(1, &argv[i][j++], 1);
			}
			i++;
			j = 0;
			write(1, "\n", 1);
		}
		return 0;
	}
	write(1, "\n", 1);
	return 0;
}