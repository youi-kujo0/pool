/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:37:10 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/08/03 14:02:37 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int strlen(char *av)
{
	int	i;
	i = 0;
	while(av[i])
		i++;
	return i;
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	 
	t_stock_str *arr;
	arr = malloc (sizeof(t_stock) * (ac + 1));
	if(!arr)
		return (NULL);
	i = 1;
	while(i++ < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
	}
	arr[i].str = 0;
	return (arr);
}
