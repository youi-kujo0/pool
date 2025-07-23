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
void	ft_putstr_non_printable(char *str)
{
	char	*string = "0123456789abcdef";
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write (1, "\\", 1);
			write (1, &string[(unsigned char)str[i] / 16], 1);
			write (1, &string[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
