/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 23:03:15 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/06 12:32:18 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(char *tab[], int i)
{
	char *tmp;

	tmp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = tmp;
}

void	ft_sort_params(char *tab[], int size)
{
	int i;
	int j;
	int bol;

	bol = 1;
	while (bol)
	{
		bol = 0;
		i = 1;
		while (i < size - 1)
		{
			j = 0;
			while (tab[i][j] == tab[i + 1][j] && tab[i][j])
				i++;
			if (tab[i][j] > tab[i + 1][j])
			{
				ft_swap(tab, i);
				bol = 1;
			}
			i++;
		}
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	ft_sort_params(argv, argc);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
