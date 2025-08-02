/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:32:36 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/08/02 17:44:15 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nbr;
	int	len;
	int	i;

	len = max - min;
	if (len <= 0)
		return (NULL);
	nbr = malloc(len * sizeof(int));
	if (!nbr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		nbr[i] = min;
		min++;
		i++;
	}
	return (nbr);
}
