/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:16:58 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/24 16:53:31 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != 0 && dest_len < size)
	{
		dest_len++;
	}
	while (src[src_len] != 0)
	{
		src_len++;
	}
	if (dest_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] != 0 && dest_len + i < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
