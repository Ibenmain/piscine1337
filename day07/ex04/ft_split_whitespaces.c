/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:54:41 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/10 22:57:07 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_moot(int i, char *str)
{
	int count;

	count = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			count++;
		else
			break ;
		i++;
	}
	return (count);
}

int		ft_is_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			if (str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t')
				count++;
		}
		if (!str[i + 1] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(char*) * (ft_is_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
		{
			k = 0;
			if ((tab[j] = malloc(sizeof(char) * (ft_moot(i, str) + 1))) == NULL)
				return (NULL);
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
				tab[j][k++] = str[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}

int main()
{
	char a[]= "future is loading iognrt54dbsgbojnr5g pdkmbsdf4s";
	char **tab;
	tab = ft_split_whitespaces(a);
	int i = 0;
	while ( i < 5)
	{
		puts(tab[i]);
		i++;

	}
	return (0);
}
