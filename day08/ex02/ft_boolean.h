/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenmain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 02:12:22 by ibenmain          #+#    #+#             */
/*   Updated: 2019/09/11 01:54:35 by ibenmain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

fndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN(nbr) nbr % 2
# define EVEN_MSG "I have an odd number of arguments.\n"
# define ODD_MSG "I have an even number of arguments.\n"
# define SUCCESS 0
# define TRUE 1
# define FALSE 0

typedef	int	t_bool;

#endif
