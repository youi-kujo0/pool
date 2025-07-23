/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:59:37 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/22 16:05:13 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int	length;

	length = 0;
	i = 0;
	while (i < size - 1 && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = 0;
	while (src[length] != 0)
	{
		length++;
	}
	return (length);
}
