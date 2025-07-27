/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:59:25 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/27 21:33:56 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
