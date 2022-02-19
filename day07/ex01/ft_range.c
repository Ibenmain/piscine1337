/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:28:03 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/10 18:04:31 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *new;
	int i;

	i = 0;
	if (min >= max)
	{
		new = NULL;
		return (new);
	}
	if (!(new = malloc(sizeof(int) * (max - min))))
		return (new);
	while (min < max)
	{
		new[i] = min;
		min++;
		i++;
	}
	return (nwe);
}
