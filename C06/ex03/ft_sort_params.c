/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 14:19:58 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/27 15:38:39 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char **argv)
{
	int	i;
	int	y;
	char	*temp;
	int	X;

	X = 0;
	while(X < argc - 1)
	{
		i = 1;
		while(i < argc - 1 - X)
		{
			y = 0;
			while(argv[i][y]&& argv[i + 1][y] && argv[i][y] == argv[i + 1][y])
				y++;
				if(argv[i][y] > argv[i + 1][y])
				{
					temp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = temp;
				}
			i++;
		}
		X++;
	}
	i = 1;
	while(i < argc)
	{
		y = 0;
		while(argv[i][y])
		{
			write(1, &argv[i][y], 1);
			y++;
		}
		write(1, "\n", 1);
		i++;
	}
}

