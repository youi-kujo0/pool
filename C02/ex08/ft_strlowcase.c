/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:58:52 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/20 17:58:54 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
    char test1[] = "HELLO WORLD!";
    char test2[] = "Already lowercase";
    char test3[] = "1234ABCdef";
    char test4[] = "";
    char test5[] = "MIXED Case 123";

    printf("Before: \"%s\"", test1);
    printf(" -> After: \"%s\"\n", ft_strupcase(test1));

    printf("Before: \"%s\"", test2);
    printf(" -> After: \"%s\"\n", ft_strupcase(test2));

    printf("Before: \"%s\"", test3);
    printf(" -> After: \"%s\"\n", ft_strupcase(test3));

    printf("Before: \"%s\"", test4);
    printf(" -> After: \"%s\"\n", ft_strupcase(test4));

    printf("Before: \"%s\"", test5);
    printf(" -> After: \"%s\"\n", ft_strupcase(test5));

    return 0;
}
