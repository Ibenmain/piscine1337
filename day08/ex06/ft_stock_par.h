/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 02:05:49 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/11 02:07:14 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

fndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef	struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

void			ft_show_tab(t_stock_par *par);
t_stock_par		*ft_param_to_tab(int ac, char **av);
void			ft_putchar(char c);

#endif
