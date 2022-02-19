/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:38:50 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/08 19:47:55 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_space(char str)
{
	return (str <= 47 || (str >= 58 && str <= 64)
	|| (str >= 91 && str <= 96) || str >= 123);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 || ft_space(str[i - 1]))
		&& (str[i] <= 'z' && str[i] >= 'a'))
		{
			str[i] = str[i] - 32;
		}
		else if (!(i == 0 || ft_space(str[i - 1]))
		&& (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
