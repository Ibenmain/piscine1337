/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 09:05:32 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/01 14:41:48 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	int size;
	int i;
	i = 0;
	int tab[11] = {16, 8, 77, 25, 100, 3, 2, 1, 45783298,637823, 8376782};;

	size = 11;
	ft_sort_integer_table(tab, 11);
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i != size - 1)
		{
			printf(" ");
		}
		i++;
	}
	return (0);
}
