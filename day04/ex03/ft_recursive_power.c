/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:21:41 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/04 14:56:12 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int powr)
{
	if (powr == 0)
		return (1);
	if (powr > 0)
	{
		return (nb * ft_recursive_power(nb, powr - 1));
	}
	return (0);
}
