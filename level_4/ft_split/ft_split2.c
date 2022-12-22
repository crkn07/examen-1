#include <stdlib.h>
#include <stdio.h>

char		**ft_split(char *str)
{
	int		i = 0;
	int		j;
	int		k = 0;
	char	**split;
	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}

int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1]);
			printf("%s ", split[0]);
		i = 1;
		while (split[i] != 0)
		{
			printf("%s ", split[i]);
			i++;
		}
		printf("%s", split[i]);
	}
	printf("\n");
    return (0);
}