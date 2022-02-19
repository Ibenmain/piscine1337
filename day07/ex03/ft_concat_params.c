/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:19:25 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/10 23:33:00 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_total(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = j + ft_strlen(argv[i]);
		i++;
	}
	return (j);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		k;
	int		j;
	int		l;
	char	*p;

	k = 0;
	i = 1;
	l = ft_total(argc, argv) + argc;
	p = malloc(sizeof(char *) * l);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			p[k] = argv[i][j];
			j++;
			k++;
		}
		p[k] = '\n';
		k++;
		i++;
	}
	p[k - 1] = '\0';
	return (p);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return (0);
}
