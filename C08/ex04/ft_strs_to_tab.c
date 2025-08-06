/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:37:10 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/08/03 21:50:46 by ymazoz           ###   ########.fr       */
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

int ft_strlen(char *av)
{
	int	i;
	i = 0;
	while(av[i])
		i++;
	return i;
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int		i;
	char *str;

	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return NULL;
	i = 0;
	while (i < ac) {
		arr[i].str = av[i];
		arr[i].size = ft_strlen(av[i]);
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	arr[i].size = 0;
	return (arr);
}

int main () {
	t_stock_str *tab;

	tab = ft_strs_to_tab(1, (char *[]){"hello"});
}
