/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:59:56 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/22 16:37:40 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex_dec[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
						 'A', 'B', 'C', 'D', 'E', 'F'};
	char	buff[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			buff[0] = '\\';
			buff[1] = hex_dec[(str[i] >> 4) & 0x0F];
			buff[2] = hex_dec[str[i] & 0x0F];
			write(1, buff, 3);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

