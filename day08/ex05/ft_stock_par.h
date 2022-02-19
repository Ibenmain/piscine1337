/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:28:17 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/11 01:59:08 by ibenmain         ###   ########.fr       */
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
char			**ft_split_whitespaces(char *str);
void			ft_show_tab(struct s_stock_par *par);

#endif
