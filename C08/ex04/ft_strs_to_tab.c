/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:37:10 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/08/02 14:06:45 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"


int	i;
int strlen(char *av)

{
	i = 0;
	while(av[i])
		i++;
	return i;

}
struct s_stock_str(int ac, char **av)
{
	i = 1;
	while(i < ac)
	{
		int	size;
		size = ft_strlen(av[i]);
		
	}




}
