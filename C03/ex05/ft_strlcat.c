#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	length;
	int	j;
	unsigned int	i;
	
	i = 0;
	j = 0;
	length = 0;
	while(dest[j] != 0)
	{
		j++;
		length++;
	}
	while(src[i] != 0 && i < size --)
	{
		dest[j + i] = src[i];
		i++;
		length++;
	}
	while(src[i] != 0)
	{
		length++;
	}
	dest[i] = 0;
	return length;
}

int main()
{
	char	str[50] = "hello world i love you so much that u cant imagine";
	char	dest[] = "world";
	int	result = ft_strlcat(str,dest, 15);
	printf("%i", result);
}
