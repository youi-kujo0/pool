/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 21:00:28 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/27 21:01:46 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	c;

	c = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_iterative_power(nb, powe - 1));
}
