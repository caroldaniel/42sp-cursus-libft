#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str1 = "1-2-3-4-5-6-7-8--8-8--8-4------4--4";
	char sep1 = '-';
	char *str2 = "--1--23--4---5-6-78------9--";
	char sep2 = '-';
	char *str3 = "-----------";
	char sep3 = '-';
	char *str4 = "12345\06789";
	char sep4 = '-';
	char *str5 = "-123456789-";
	char sep5 = '-';
	char *str6 = "||1234|5678||9||";
	char sep6 = '|';

	char **tab1 = ft_split(str1, sep1);
	char **tab2 = ft_split(str2, sep2);
	char **tab3 = ft_split(str3, sep3);
	char **tab4 = ft_split(str4, sep4);
	char **tab5 = ft_split(str5, sep5);
	char **tab6 = ft_split(str6, sep6);
	size_t i = 0;

	printf("-------STRING 1-------\n");
	printf("string: '%s'\n", str1);
	printf("seperator: '%c'\n", sep1);
	printf("word count: %li\n", ft_count(str1, sep1));
	while (i < (ft_count(str1, sep1) + 1))
	{
		printf("tab[%zu]: %s\n", i, tab1[i]);
		i++;
	}
	i = 0;
	printf("\n-------STRING 2-------\n");
	printf("string: '%s'\n", str2);
	printf("seperator: '%c'\n", sep2);
	printf("word count: %li\n", ft_count(str2, sep2));
	while (i < (ft_count(str2, sep2) + 1))
	{
		printf("tab[%zu]: %s\n", i, tab2[i]);
		i++;
	}
	i = 0;
	printf("\n-------STRING 3-------\n");
	printf("string: '%s'\n", str3);
	printf("seperator: '%c'\n", sep3);
	printf("word count: %li\n", ft_count(str3, sep3));
	while (i < (ft_count(str3, sep3) + 1))
	{
		printf("tab[%zu]: %s\n", i, tab3[i]);
		i++;
	}
	i = 0;
	printf("\n-------STRING 4-------\n");
	printf("string: '%s'\n", str4);
	printf("seperator: '%c'\n", sep4);
	printf("word count: %li\n", ft_count(str4, sep4));
	while (i < (ft_count(str4, sep4) + 1))
	{
		printf("tab[%zu]: %s\n", i, tab4[i]);
		i++;
	}
	i = 0;
	printf("\n-------STRING 5-------\n");
	printf("string: '%s'\n", str5);
	printf("seperator: '%c'\n", sep5);
	printf("word count: %li\n", ft_count(str5, sep5));
	while (i < (ft_count(str5, sep5) + 1))
	{
		printf("tab[%zu]: %s\n", i, tab5[i]);
		i++;
	}
	i = 0;
	printf("\n-------STRING 6-------\n");
	printf("string: '%s'\n", str6);
	printf("seperator: '%c'\n", sep6);
	printf("word count: %li\n", ft_count(str6, sep6));
	while (i < (ft_count(str6, sep6) + 1))
	{
		printf("tab[%zu]: %s\n", i, tab6[i]);
		i++;
	}
}

