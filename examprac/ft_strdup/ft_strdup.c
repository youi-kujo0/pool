#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char	*src)
{
	int	len;
	char	*dest;
	len = 0;
	while(src[len])
		len++;
	dest = malloc((len + 1) * sizeof(char));
	len = 0;
	while(src[len])
	{
		dest[len] = src[len];
		len++;
	}
	return dest;
}

int main()
{
	printf("%s", ft_strdup("hello"));
}
