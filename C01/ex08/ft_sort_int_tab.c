/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:27:07 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/28 12:54:23 by ymazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

{
	int	temp;
	int	i;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		i = 0;
		swapped = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}
