/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:05:13 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/11 01:58:46 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;
	int		len;

	i = 0;
	len = 0;
	while (src[len] != 0)
		len++;
	ptr = (char*)malloc(sizeof(*ptr) * (len + 1));
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str = str + 1;
		i++;
	}
	return (i);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par *ptr;

	i = 0;
	ptr = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	ptr[ac].str = 0;
	while (i < ac)
	{
		ptr[i].size_param = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		ptr[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (ptr);
}
