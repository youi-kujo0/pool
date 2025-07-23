/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:54:06 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/23 16:16:51 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_strcmp(char *s1, char *s2)
{
        int     i;
        int     c;

        i = 0;
        while(s1[i] != 0 && s2[i] != 0)
        {
		c = s1[i] - s2[i];
		if(!( c == 0))
			return c;
                i++;
        }
        return 0;
}

int main()
{
        char    *s1 = "Hello";
        char    *s2 = "Hello";
       int result = ft_strcmp(s1, s2)
        printf("%i", result);
}
