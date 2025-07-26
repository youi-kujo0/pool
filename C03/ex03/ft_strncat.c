#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int     i;
	unsigned int	j;

	j = 0;
	i = 0;
	while(dest[i] != 0)
	{
		i++;
	}
		while(src[j] != 0 && j < nb)
	     	{
			dest[i] = src[j];
			i++;
			j++;
	        }
		dest[i] = 0;
	return (dest);
}

int main()
{
	char src[30] = "Hello world ! how u doing";
	char dest[20] = "";
	char *result = ft_strncat(dest, src, 40);
	printf("%s", result);
}
