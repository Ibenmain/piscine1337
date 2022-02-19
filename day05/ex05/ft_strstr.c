/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 23:21:05 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/08 19:39:43 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int f;

	i = 0;
	while (str[i])
	{
		j = 0;
		f = i;
		while (str[f] == to_find[j] && str[f] && to_find[j])
		{
			f++;
			j++;
		}
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}
