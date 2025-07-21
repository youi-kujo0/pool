#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int     i;
	int	j;

	j = 0;
	i = 0;
	while(dest[i] != 0)
	{
		while(src[j] != 0 && j <= nb)
	     	{
			dest[i] = src[j];
			i++;
			j++;
	        }
		i++;
	}
	return dest;
}

int main()
{
	char src[50] = "Hello world ! how u doing";
	char dest[50] = "Hello";
	char *result = ft_strncat(dest, src, 20);
	printf("%s", result);
}
