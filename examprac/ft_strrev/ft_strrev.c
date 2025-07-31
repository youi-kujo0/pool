char	*ft_strrev(char *str)
{
	int	i;
	char	tmp;
	int	len;

	len = 0;
	i = 0;
	while(str[len])
	{
		len++;
	}
	while(i < len / 2)
	{
		tmp = str[len - 1 - i];
		str[len - 1 - i] = str[i];
		str[i] = tmp;
		i++;
	}
	return str;
}
#include <stdio.h>
int main()
{
	char str[] = "123456789";
	printf("%s", ft_strrev(str));
}
