/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 17:57:54 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/20 17:57:55 by yel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int	i;
	i = 0;
	if(str[i] == 0)
	{
		return 1;
	}
	while(str[i] != 0)
	{
		if(str[i] < 32 || str[i] > 126)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main(void)
{
    char *test1 = "Hello, World!";    // printable -> expect 1
    char *test2 = "Line\nBreak";      // contains non-printable '\n' -> expect 0
    char *test3 = "";                 // empty string -> expect 1
    char *test4 = "1234567890";       // digits, printable -> expect 1
    char *test5 = "Tab\tCharacter";   // contains tab '\t', non-printable -> expect 0

    printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_printable(test1));
    printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_printable(test2));
    printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_printable(test3));
    printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_printable(test4));
    printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_printable(test5));

    return 0;
}
