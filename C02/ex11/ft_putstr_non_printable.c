/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:59:56 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/20 17:59:58 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
	int	i;
	i = 0;
	while(str[i] != 0)
	{
		if(str[i] < 32 || str[i] > 126)
		{
			char hex_dec[]= "0123456789abcdef";
			char buff[2];

			buff[0] = hex_dec[(str[i] >> 4) & 0x0f];
			buff[1] = hex_dec[str[i] & 0x0f];
			write(1, "\\", 1);
			write(1, buff, 2);
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
    char test_str[] = "Hello\nWorld\t!\x01\x7F";
    ft_putstr_non_printable(test_str);
    write(1, "\n", 1);
    return 0;
}
