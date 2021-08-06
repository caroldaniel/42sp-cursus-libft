#include "libft.h"
#include <stdio.h>

size_t	ft_count(const char *s, char c)
{
	size_t	i;
	size_t	prev;
	size_t	next;
	size_t	size;
	size_t	counter;

	i = 0;
	prev = i;
	next = i;
	counter = 0;
	while (1)
	{
		if (s[i] == c || s[i] == '\0')
			next = i;
		size = next - prev;
		if (size > 1 || (size == 1 && s[i - 1] != c))
			counter++;
		if (s[i] == '\0')
			break ;
		prev = next;
		i++;
	}
	return (counter);
}

int main(void)
{
	char *str1 = "1-2-3-4-5-6-7-8--8-8--8-4------4--4";
	char sep1 = '-';
	char *str2 = "--1-23--4---5-6-78------9--";
	char sep2 = '-';
	char *str3 = "-----------";
	char sep3 = '-';
	char *str4 = "123456789";
	char sep4 = '-';

	char **tab1 = ft_split(str1, sep1);
	char **tab2 = ft_split(str2, sep2);
	char **tab3 = ft_split(str3, sep3);
	char **tab4 = ft_split(str4, sep4);
	int i = 0;

	printf("-------STRING 1-------\n");
	printf("string: %s\n", str1);
	printf("word count: '%li'\n", ft_count(str1, sep1));
	while (i < (ft_count(str1, sep1) + 1))
	{
		printf("tab[%i]: %s\n", i, tab1[i]);
		i++;
	}
	i = 0;
	printf("-------STRING 2-------\n");
	printf("string: %s\n", str2);
	printf("word count: '%li'\n", ft_count(str2, sep2));
	while (i < (ft_count(str2, sep2) + 1))
	{
		printf("tab[%i]: %s\n", i, tab2[i]);
		i++;
	}
	i = 0;
	printf("-------STRING 3-------\n");
	printf("string: %s\n", str3);
	printf("word count: '%li'\n", ft_count(str3, sep3));
	while (i < (ft_count(str3, sep3) + 1))
	{
		printf("tab[%i]: %s\n", i, tab3[i]);
		i++;
	}
	i = 0;
	printf("-------STRING 4-------\n");
	printf("string: %s\n", str4);
	printf("word count: '%li'\n", ft_count(str4, sep4));
	while (i < (ft_count(str4, sep4) + 1))
	{
		printf("tab[%i]: %s\n", i, tab4[i]);
		i++;
	}
}

