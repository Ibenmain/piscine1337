/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 02:00:29 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/11 02:04:28 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int		check_if_negatif(int i)
{
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	long	t;

	t = (long)nb;
	t = check_if_negatif(t);
	if (t >= 10)
	{
		ft_putnbr(t / 10);
		ft_putnbr(t % 10);
	}
	else
	{
		ft_putchar(t + '0');
	}
}

void	ft_print_words_tables(char **tab)
{
	int	j;
	int	i;

	j = 0;
	while (tab[j])
	{
		i = 0;
		while (tab[j][i])
		{
			ft_putchar(tab[j][i]);
			++i;
		}
		ft_putchar('\n');
		j++;
	}
}

void	ft_show_tab(t_stock_par *par)
{
	int	j;
	int	i;

	j = 0;
	while (par[j].str != 0)
	{
		i = 0;
		while (par[j].copy[i])
		{
			ft_putchar(par[j].copy[i]);
			i++;
		}
		ft_putchar('\n');
		ft_putnbr(par[j].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[j].tab);
		j++;
	}
}
