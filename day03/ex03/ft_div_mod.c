/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 12:02:38 by ibenmain          #+#    #+#             */
/*   Updated: 2019/08/27 12:29:34 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main()
{
	int n;
	int m;
	int div;
	int mod;

	n = 50;
	m = 2;
	ft_div_mod(n, m, &div, &mod);
	printf("%d  %d",div ,mod);
	return (0);

}
