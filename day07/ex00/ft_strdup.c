/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:08:46 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/10 23:26:43 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strdup(char *str)
{
	char *new;

	new = NULL;
	if (str != NULL)
	{
		new = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
		if (new != NULL)
			ft_strcpy(str, new);
	}
	return (new);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_strdup(argv[1]));
	return (0);
}
