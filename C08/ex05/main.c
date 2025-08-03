/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:37:10 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/08/03 18:05:46 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"
void	ft_putnbr(int nb)
{
	char	c;
	long	nbr;

	nbr = (long)nb;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}
void ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while(par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}
int	main(int argc, char **argv)
{
	t_stock_str *arr = ft_strs_to_tab(argc - 1, argv + 1);
	if (!arr)
		return 1;
	ft_show_tab(arr);
	// Optional: free copies here
	return 0;
}
