#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int		count_words(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		while (c && *str && *str == c)
			str++;
		count++;
	}
	return (count);
}

static char	*malloc_word(const char *str, char c)
{
	char *word;
	int count;
	int	i;

	count = 0;
	while (str[count] && str[count] != c)
		count++;
	word = (char *)malloc(sizeof(char) * (count + 1));
	ft_strlcpy(word, str, count + 1);
	return (word);
}

char	**ft_split(const char *str, char c)
{
	char **arr;
	int i;

	while (*str && *str == c)
		str++;
	arr = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1));
	i = 0;
	while (*str)
	{
		arr[i] = malloc_word(str, c);
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}

#include <stdio.h>

int		main()
{
	char **arr;

	char *phrase = "----   Hello, --  Flavio\t -- Wu--ensche!  ----";
	arr = ft_split(phrase, '-');
	int i = 0;
	while(arr[i])
	{
		printf("%s$\n", arr[i]);
		i++;
	}
}
