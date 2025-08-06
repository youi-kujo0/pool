/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:16:49 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/08/03 21:32:06 by ymazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;

int         ft_strlen(char *str);
char        *ft_strdup(char *src);
t_stock_str *ft_strs_to_tab(int ac, char **av);
#endif
