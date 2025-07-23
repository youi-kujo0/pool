#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int     i;
	unsigned int	j;

	j = 0;
	i = 0;
	while(dest)
	{
		i++;
	}
		while(src[j] != 0 && j <= nb)
	     	{
			dest[i] = src[j];
			i++;
			j++;
	        }
	return (dest);
}

int main()
{
	char src[20] = "Hello world ! how u doing";
	char dest[20] = "Hello";
	char *result = ft_strncat(dest, src, 40);
	printf("%s", result);
}
