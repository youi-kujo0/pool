/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:59:18 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/20 17:59:21 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != 0)
	{	
		if(i == 0 || str[i - 1] == ' ' && (str[i] >= 'a' &&  str[i] <= 'z'))
		{
		str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int main()
{
    char str[] = "hello world! this is a test.";

    printf("Original: %s\n", str);
    printf("Modified: %s\n", ft_strcapitalize(str));  // Test your function
    return 0;
}
