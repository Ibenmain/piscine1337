/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 09:07:50 by ibenmain          #+#    #+#             */
/*   Updated: 2019/08/29 15:13:15 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int k;
	int i;
	int j;
	char t;

	k = 1;
	while (str[k] != '\0')
	{
		k++;
	}

	i = 0;
	j = k-1;

	while(i < j)
	{
		t = str[i];
		str[i] = str[j];
		str[j] = t;
		i++;
		j--;
	}
	return (str);
}

int		main(void)
{
	char str[] = "Issam Benmaina";
	printf("%s", ft_strrev(str));
	return (0);
}
