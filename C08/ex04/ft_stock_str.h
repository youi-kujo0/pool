/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:16:49 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/08/03 17:38:58 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}		t_stock_str;

int         ft_strlen(char *str);
char        *ft_strdup(char *src);
t_stock_str *ft_strs_to_tab(int ac, char **av);
#endif
