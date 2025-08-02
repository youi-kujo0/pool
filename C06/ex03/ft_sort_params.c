/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 14:19:58 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/08/02 16:23:59 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_swap(char **av1, char **av2)
{
	char *tmp;

	tmp = *av1;
	*av1 = *av2;
	*av2 = tmp;

}
int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1 && s2)
	{
		if(s1[i] - s2[i] != 0)
			return s1[i] - s2[i];
		i++;
	}
	return s1[i] - s2[i];

}
void ft_sort_para(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	while(j < ac)
	{
		i = 1;
		while(i < ac - j)
		{
			if(ft_strcmp(av[i], av[i + 1]) > 0)
				ft_swap(&av[i], &av[i + 1]);
			i++;
		}
		j++;
	}
}

void	put_str(char *av)
{
	int	i;

	i = 0;
	while(av[i])
		write(1,&av[i++], 1);
}

int main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort_para(ac, av);
	while(i < ac)
	{
		put_str(av[i]);
		i++;
	}
}
