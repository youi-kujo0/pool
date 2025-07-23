/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:04:59 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/23 16:21:49 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int     i;
	int     c;

        i = 0;
	while(i < n && s1 && s2)
	{	
		c = s1[i] - s2[i];
                if(c != 0)
                        return c;
		i++;
        }
        	return 0;
}

int main()
{
        char    *s1 = " q";
        char    *s2 = " ";
	int result = ft_strncmp(s1, s2, 3);
        printf("%i", result);

}
