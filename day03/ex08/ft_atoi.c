/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 22:17:08 by ibenmain          #+#    #+#             */
/*   Updated: 2019/08/30 22:31:34 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int nb;
	int a;

	i = 0;
	nb = 0;
	a = 0;
	while(str[i] <= ' ')

		i++;
		if (str[i] == '-' )
			a = 1;
		if (str[i] == '-' || str[i] == '+')
			i++;
		while((str[i] != ‘\0’) && (str[i] >= ‘0’) && (str[i] <= ‘9’))
		{
			nb = nb * 10 + str[i] - '0';
			i++;
		}
		If (a == 1)
		return (-nb);
		else
		return(nb);
}

int		main()
{
	char *str;

	str = "-9545d";
	printf("%d",ft_atoi(str));
	return (0);
}
