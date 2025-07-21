/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:55:58 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/21 15:42:13 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
	{
		if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
		{
 			return 0;
		}
		i++;
	}
	return 1;
}

int main()
{
char *test1 = "HelloWorld";
    char *test2 = "Hello123";
    char *test3 = "";

    printf("Is '%s' alpha? %d\n", test1, ft_str_is_alpha(test1));
    printf("Is '%s' alpha? %d\n", test2, ft_str_is_alpha(test2));
    printf("Is '%s' alpha? %d\n", test3, ft_str_is_alpha(test3));
}
