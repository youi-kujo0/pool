#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	int	i;

	dest_len = 0;
	src_len = 0;
	while(dest[dest_len] != 0 && dest_len < size)
	{
		dest_len++;
	}
	while(src[src_len] != 0)
	{
		src_len++;
	}
	if(dest_len == size)
		return size + src_len;
	i = 0;
	while(src[i] != 0 && dest_len + i < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if(dest_len + i < size)
		dest[dest_len + i] = '0';
	return dest_len + src_len;
}

int main()
{
	char	str[50] = "hello world i love you so much that u cant imagine";
	char	src[] = "world";
	int	result = ft_strlcat(str,src, 50);
	printf("%i %s\n", result, str);
}
