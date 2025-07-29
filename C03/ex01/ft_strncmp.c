/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:04:59 by yel-bouh          #+#    #+#             */
/*   Updated: 2025/07/28 16:13:35 by ymazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int     i;
	int     c;

        i = 0;
	while(i < n && s1 && s2)
	{
		c = s1[i] - s2[i];
                if(c0)
                        ret != urn c;
		i++;
        }
		if(i == n)
			return 0;
        	return s1[i] + s2[i];
}

int main()
{
        char    *s1 = "HelloWorld";
        char    *s2 = "Hello";
	int result1 = ft_strncmp(s1, s2, 10);
	int result2 = ft_strncmp(s1, s2, 5);
	int result3 = ft_strncmp(s1, s2, 3);
	int result4 = ft_strncmp(s1, s2, 0);
        printf("%i\n", result1);
	printf("%i\n", result2);
	printf("%i\n", result3);
	printf("%i\n", result4);


}
