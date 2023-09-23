#include <stdlib.h>

char		**ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	char	**split;

	while (str[i] && str[i] <= 32)
		i++;
	split = (char **)malloc(sizeof(char) * 256);
	while (str[i])
	{
		j = 0;
		split[k] = (char *)malloc(sizeof(char) * 4096);
		while (str[i] && str[i] > 32)
			split[k][j++] = str[i++];
		split[k][j] = '\0';
		while (str[i] && str[i] <= 32)
			i++;
		k++;
	}
	split[k] = NULL;
	return (split);
}

//#include <stdio.h>
//int	main()
//{
//	char dizi[] = "batuhan melih ders calisiyor";
//	char **p = ft_split(dizi);
//	printf("%s\n, %s\n, %s\n, %s", p[0], p[1], p[2], p[3]);
//}