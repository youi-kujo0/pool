/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:55:44 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/21 15:40:32 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while(i < n  && src[i] != 0) 
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}

int main()
{
	
	char source[] = "42AbuDhabi";
	char destination[20];

    ft_strncpy(destination, source, 5);
    printf("Copied (5 chars): '%s'\n", destination);

    ft_strncpy(destination, source, 15);  // Longer than source
    printf("Copied (15 chars): '%s'\n", destination);

}
