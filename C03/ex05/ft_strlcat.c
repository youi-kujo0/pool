#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	length;
	int	j;
	int	i;
	
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
	return length;
}

int main()
{
	char	str[30] = "hello world i love you";
	char	to_find[30] = "worold";
	int	result = ft_strlcat(str,to_find, 5);
	printf("%i", result);
}
