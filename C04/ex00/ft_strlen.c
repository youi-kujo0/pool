#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len])
	{
		len++;
	}
	return (len);
}

int main()
{
	char *str = "Hello world how are you!";
	int len = ft_strlen(str);
	printf("%d", len);
}
